#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,max;

    printf("enter number\n");
    scanf("%d",&n1);
    if(n1%2)
    {
       printf("%d is odd",n1);
    }
    else
    {
        printf("%d is even",n1);
    }



    return 0;
}

/*********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,max,grade;

    printf("enter your grade\n");
    scanf("%d",&grade);

    if(grade>100)
    {
        printf("error\n");
    }
    else if(grade>=80)
    {
        printf("A\n");
    }
    else if (grade>=70)
    {
        printf("B\n");
    }
    else if (grade>=60)
    {
        printf("C\n");
    }
    else if (grade>=50)
    {
        printf("D\n");
    }
    else if (grade >=0)
    {
        printf("F\n");
    }
    else
    {
        printf("error\n");
    }





    return 0;
}

/*********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,max,grade;
    int rem;

    scanf("%d",&n1);
    rem=n1%5;
    if(rem<=2)
    {
        printf("%d",n1-rem);

    }
    else
        printf("%d",n1+(5-rem));


return 0;
}

/*********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,max,grade;
    int rem,x;

    scanf("%d",&n1);
n1=n1+2;
x=n1/5;
n1=x*5;
printf("%d",n1);




return 0;
}

/*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  x,y,totalnum=10,num,max=0;
    unsigned char z,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;


    for(;;)// super loop
    {
        max=0;
        printf("enter total numbers: ");
         scanf("%d",&totalnum);
         printf("enter numbers\n");
        for(y=0; y<totalnum; y=y+1)
        {
            
            scanf("%d",&num);
            if(y==0)
            {
                max=num;
            }
            if(num>max)
            {
                max=num;

            }
           printf("m=%d\n",max);
        }

        printf("max=%d\n=======================================\n",max);

    }

    return 0;
}