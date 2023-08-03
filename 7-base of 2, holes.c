#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int totalnum=10,num,max=0x80000000,sum=0,min=0x7fffffff;
    unsigned int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,temp,result,rem;

    signed int i,n, x,y,z,flag=0;


    while(1)
    {

     scanf("%d",&totalnum);
     for(i=0;i<totalnum;i=i+1)
     {
         scanf("%d",&num);
         if(i==0)
         {
             max=num;
             min=num;
         }
         if(num>max)
         {
             max=num;
         }
         if(num<min)
         {
             min=num;
         }

     }
     printf("max=%d   min=%d\n\n",max,min);




    }





    return 0;
}
.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int totalnum=10,num,max=0x80000000,sum=0,min=0x7fffffff;
    unsigned int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,temp,result,rem;

    signed int i,n, x,y,z,flag=0;


    while(1)
    {
        flag=0;
        scanf("%d",&num);
        if(num==0)
        {
            flag=1;
        }

        while( num>1)
        {
            if(num%2!=0)
            {
                flag=1;
            }
            num=num/2;
            printf("%d\n",num);
        }
        if(flag==0)
        {
            printf("base of 2\n");
        }
        else
        {
             printf("NOT \n");
        }



    }











return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int totalnum=10,num,max=0x80000000,sum=0,min=0x7fffffff;
    unsigned int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,temp,result,rem;

    signed int i,n, x,y,z,flag=0;


    while(1)
    {
        result=1;
        scanf("%d",&num);

        flag=1;
        while( result<=num)
        {
           if(num==result)
           {
               flag=0;
           }
           result=result*2;
        }
        if(flag==0)
        {
            printf("base of 2\n");
        }
        else
        {
             printf("NOT \n");
        }



    }











return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int totalnum=10,num,max=0x80000000,sum=0,min=0x7fffffff;
    unsigned int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,temp,result,rem;

    signed int i,n, x,y,z,flag=0;


    while(1)
    {
        sum=0;
        scanf("%d",&num);
        if(num==0)
        {
            sum=1;
        }
        while(num>0)
        {
            rem=num%10;
            num=num/10;
            if(rem==8)
            {
                sum=sum+2;
            }
            else if(rem==6||rem==4||rem==0||rem==9)
            {
                sum=sum+1;
            }
        }
      printf("holes=%d\n\n",sum);

    }











return 0;
}
