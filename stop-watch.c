#define F_CPU 8000000
#include <util/delay.h>

#define PORTA (*(volatile unsigned char*)0x3B)
#define DDRA (*(volatile unsigned char*)0x3A)
#define PINA (*(volatile unsigned char*)0x39)

#define PORTB (*(volatile unsigned char*)0x38)
#define DDRB (*(volatile unsigned char*)0x37)
#define PINB (*(volatile unsigned char*)0x36)

#define PORTC (*(volatile unsigned char*)0x35)
#define DDRC (*(volatile unsigned char*)0x34)
#define PINC (*(volatile unsigned char*)0x33)

#define PORTD (*(volatile unsigned char*)0x32)
#define DDRD (*(volatile unsigned char*)0x31)
#define PIND (*(volatile unsigned char*)0x30)

#define READ_BIT(reg,bit) ((reg>>bit)&1)

#define SET_BIT(reg,bit) (reg=reg|(1<<bit))

#define CLR_BIT(reg,bit) (reg=reg&(~(1<<bit)))

#define TOGGLE_BIT(reg,bit) (reg=reg ^ (1<<bit))



void segment_display_MUX(char num){
	unsigned char d0,d1;
	 char SEG_ARR[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
		 d0=num%10;
		 d1=num/10;
		 
		 SET_BIT(PORTC,6);
		 PORTA=SEG_ARR[d0];
		 CLR_BIT(PORTC,7);
		 _delay_ms(1);
		 
		 SET_BIT(PORTC,7);
		 PORTA=SEG_ARR[d1];
		 CLR_BIT(PORTC,6);
		 _delay_ms(1);
}
  unsigned char x=30;
void config_mood(void){
	
	if (READ_BIT(PIND,2)==0)
	{
		_delay_ms(2);
		x++;
		while(READ_BIT(PIND,2)==0){
			x++;
		}
	}
	
	if (READ_BIT(PIND,3)==0)
	{
		_delay_ms(2);
		x--;
		while(READ_BIT(PIND,3)==0){
			x--;
		}
	}
	
}


void running_mood(char y){
	 
	 if (READ_BIT(PIND,2)==0)
	 {
		 y=x;
		 segment_display_MUX(y);
		 while(READ_BIT(PIND,3));
		 
	 }
	 
	 if (READ_BIT(PIND,3)==0)
	 {
		 _delay_ms(2);
		 while(READ_BIT(PIND,3));
	 }
	
}



int main(void){
	DDRA=0xff;
	DDRC=0xff;
	PORTC=0;
	DDRD=0;
	PORTD=0b00011100;
 unsigned char y,flag=0;
 unsigned int i;
            y=x;
	while(1){
		
		 if (y==0)
		 {
			 //buzzer
			 SET_BIT(PORTC,5);
			 _delay_ms(50);
			 CLR_BIT(PORTC,5);
			 
			 
			 y=x;
		 }
		 
		 for (i=0;i<250;i++)
		 { 
			 if (READ_BIT(PORTD,4)==0)
			 {
				 _delay_ms(2);
				 if (flag==0)
				 {
					  running_mood(y);
					  flag=1;
				 }else{
					   config_mood();
					    flag=0;
				 }
				
			 } 
	 
			 segment_display_MUX(y);
		 }
		 y--;
		
		
	
	
	
		
		
	}
}