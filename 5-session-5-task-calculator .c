#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,total;
    char x ;
    while(1)
    {
        printf("Enter first number :");
        scanf("%d",&n1);
        printf("\nEnter second number :");
        scanf("%d",&n2);
        printf("\nEnter your operator :");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='+')
        {
            total=n1+n2;
            printf("%d%c%d =%d\n",n1,x,n2,total);
        }
        else if(x=='-')
        {
            total=n1-n2;
            printf("%d%c%d =%d\n",n1,x,n2,total);
        }
        else if(x=='*')
        {
            total=n1*n2;
            printf("%d %c %d =%d\n",n1,x,n2,total);
        }
        else if(x=='/')
        {
            if(n2==0)
            {
                printf("Cannot divide by zero\n");
            }
            else
            {
                total=n1/n2;
                printf("%d%c%d =%d\n",n1,x,n2,total);
            }
        }
        else
        {
            printf("Error\n");
        }
    }
    return 0;
}

//************************************************************************
//an other way using switch case

int main()
{

    int n1,n2,total;
    char x ;
    while(1)
    {
        printf("Enter first number :");
        scanf("%d",&n1);
        printf("\nEnter second number :");
        scanf("%d",&n2);
        printf("\nEnter your operator :");
        fflush(stdin);
        scanf("%c",&x);
        switch(x)
        {
        case '+':
            total=n1+n2;
            printf("%d%c%d =%d\n",n1,x,n2,total);
            break;
        case '-':
            total=n1-n2;
            printf("%d%c%d =%d\n",n1,x,n2,total);
            break;
        case '*':
            total=n1*n2;
            printf("%d %c %d =%d\n",n1,x,n2,total);
            break;
        case '/':
            if(n2==0)
            {
                printf("Cannot divide by zero\n");
            }
            else
            {
                total=n1/n2;
                printf("%d%c%d =%d\n",n1,x,n2,total);
            }
        default:
            printf("Error\n");


        }
    }
    return 0;
}