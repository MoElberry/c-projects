                                               session-4
                                                 task-1


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n,i;
    int sum;
    for(; num=!0;)
    {
        sum=0;
        printf("Enter the number :");
        scanf("%d",&num);
        for(int i=1; i<=num; i++)
        {
            printf("number %d :",i);
            scanf("%d",&n);
            sum+=n;

        }
        printf("\nTotal number : %d\n",sum);
    }

    return 0;
}
 
********************************************************************************
                                                task-2


#include <stdio.h>
#include <stdlib.h>
  int main()
{
    int n1,n2,max,min;
    printf("Enter number 1 :");
    scanf("%d",&n1);
    printf("Enter number 2 :");
    scanf("%d",&n2);
    if(n1>n2){
        max = n1;
        min = n2;
    } else{
        max = n2;
        min = n1;
    }
    for(int x =max-1;x>min;x--){
           
        printf("%d \t",x);

    }
     return 0;
}
*********************************************************************
//                  task-3
//                    (1)

                                                        

 int main()
{
    int x ,y,swa;
    printf("Enter x :");
    scanf("%d",&x);
    printf("\nEnter y :");
    scanf("%d",&y);
    swa=x;
    x=y;
    y=swa;
    printf("\n x :%d",x);
    printf("\n y :%d",y);

     return 0;
}

//                                                  **********************
//                                     (2)

 int main()
{
    int x ,y ,n1,n2;
    printf("Enter x :");
    scanf("%d",&x);
    printf("\nEnter y :");
    scanf("%d",&y);
    n1=x;
    n2=y;
    x=n2;
    y=n1;

    printf("\n x :%d",x);
    printf("\n y :%d",y);



        return 0;
}

//                                                      *********************
//                                                        (3)



int main()
{

    int n1,n2,x,y;
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("n1 : %d\n",n1);
    printf("n2 : %d\n",n2);

        return 0;
}

//    ************************************************************************************
//                                        (4)


int main()
{

    int n1,n2,x,y;
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);

    n1=n1*n2;
    n2=n1/n2;
    n1=n1/n2;
    printf("n1 : %d\n",n1);
    printf("n2 : %d\n",n2);

        return 0;
}