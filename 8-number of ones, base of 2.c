#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  i,x=5,z,sum;
    unsigned short y;

    printf("%d\n\n",sizeof(char));


    while(1)
    {
        scanf("%d",&x);
        sum=0;
        for(i=0;i<sizeof(x)*8;i=i+1)
        {
            if((x>>i)&1)
            {
              sum=sum+1;
            }
        }
        printf("numof ones=%d\n",sum);
        if(sum==1)
        {

        }

    }

    return 0;
}
/*************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  i,x=5,z,sum;
    unsigned short y;

    while(1)
    {
        scanf("%d",&x);
        sum=0;
        while(x)
        {
            sum=sum+(x&1);
            x=x>>1;
        }
        printf("numof ones=%d\n",sum);
        if(sum==1)
        {

        }

    }


    return 0;
}
/*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  x=5,z,sum;
    unsigned short y;
int i;
    printf("%d\n\n",sizeof(char));


    while(1)
    {
        scanf("%d",&x);
        sum=0;
        for(i=31;i>=0;i=i-1)
        {
           if((x>>i)&1)
           {
               printf("1");
           }
           else
           {
               printf("0");
           }

        }
        printf("\n",sum);
       

    }


    return 0;
}

/*************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  x=5,z,sum;
    unsigned short y;
    signed int i;


    while(1)
    {
        scanf("%d",&x);
       if( x==1||x==2||x==4||x==8)||
          (x==0x10)||(x==0x20)||(x==0x40)||(x==0x80)||
          (x==0x100)||(x==0x200)||(x==0x400)||(x==0x800)||
          (x==0x1000)||(x==0x2000)||(x==0x4000)||(x==0x8000))
        {
            printf("base of 2\n");
        }
        else
        {
            printf("not \n");
        }


    }


    return 0;
}