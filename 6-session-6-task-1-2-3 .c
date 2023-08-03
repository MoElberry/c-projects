#include <stdio.h>
#include <stdlib.h>

// session-6
// task-1
// take two number from user and print prime numbers between them
/*
int main()
{
    unsigned int n1,n2;
    int i,x;
    int flag=0;
    int max,min;

    while(1)
    {
        printf("\nEnter your n1 :");
        scanf("%d",&n1);
        printf("\nEnter your n2 :");
        scanf("%d",&n2);
        if(n1>n2)
        {
            max=n1;
            min=n2;
        }
        else
        {
            max=n2;
            min=n1;
        }
        for(i=max; i>=min; i--)
        {
            flag=0;
            for(x=2; x<i&&flag==0; x++)
            {
                if(i%x==0)
                {

                    flag=1;
                }
            }
            if(flag==0)
            {
                if(i==1){

                }else{
                printf("%d  ",i);
            }

            }
        }
    }
    return 0;
}
*/
//*****************************************************************

// task-2
/*  Write a program that reads a positive integer and check
    if this number is a base of 2 like 1,2,4,8,16,32, 64...

 */
/*
int main()
{
    unsigned int n;
    int flag, i;
    while(1)
    {
        printf("\nEnter your number :");
        scanf("%d",&n);

        flag=0;

        for(i=2; i<=n&&flag==0; i*=2)
        {

            if(i==n)
            {
                printf("number base of 2");
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("this number is not base of 2 ");
        }

    }



    return 0;
}
*/
//*******************************************************************

// task-2
// an other way




int main()
{
    unsigned int num;
    //int flag, i;
    while(1)
    {
        printf("\nEnter your number :");
        scanf("%d",&num);
        //if((num != 0) && ((num &(num - 1)) == 0))
        if((num != 0) && ((num &(num - 1)) == 0))
        {
            if(num==1)
            {
                printf("this number is not base of 2 ");
            }
            else
            {
                printf("number base of 2") ;
            }
        }
        else
        {
            printf("this number is not base of 2 ");
        }
    }



    return 0;
}



//*******************************************************************
// task-3
// strong number

/*
int main()
{
    int num,k,i;
    int sum=0;
    int n=0;
    int fact=1;
    while(1)
    {
        printf("Enter your number :");
        scanf("%d",&num);
        k=num;
        sum=0;

        while(num)
        {
            n=num%10;
            fact=1;
            for(i=n; i>=1; i--)
            {
                fact*=i;
            }
            sum+=fact;
            num=num/10;
        }


        if(sum==k)
        {
            printf("%d is a strong number\n",k);
        }
        else
        {
            printf("%d not strong\n",k);
        }
    }
    return 0;
}
*/
//*******************************************************************



