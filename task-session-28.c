#include <stdio.h>

#define LIMIT(z,l,u) if(z>=l&&z<=u){\
                     z=z;}\
                     else if(z<l){\
                     z= l;}\
                     else if(z>u){\
                     z=u;}	
					 
#define SET_BIT(num,bit)     ( num=num|1<<bit)					 
#define CLEAR(num,bit)   (num=num&(~(1<<bit)))				 
#define TOGGLE(num,bit)   (num=num^((1<<bit)))					 
#define READ(num,bit)  (num=1&((num>>bit)))	

void set_bet(int * num,int bit){
	
	*num=*num |(1<<bit);
}			 		

 
	 int main(){
		 
	int a=10;	 
	int y=5;
    int z=7;
    int f=7;	
	int r=8;
	/*
    int x=50;
	LIMIT(x,5,20);
	printf("x =%d",x); 
		*/ 
	SET_BIT(y,1);
    CLEAR(z,1);	
	TOGGLE(f,1);
	READ(r,3);
		printf("y=%d\n",y); 
		printf("z=%d\n",z); 
		printf("f=%d\n",f); 
		printf("r=%d\n",r); 
		
		set_bet(&a,2);
		printf("a=%d\n",a); 
		 
	 }
	 