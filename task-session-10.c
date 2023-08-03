// task-1:generation prime


#include <stdio.h>

#include <stdlib.h>




// function prime or not prime return value
int primefun(int n)
{
    int flag=0;
    if(n==0 || n==1)
    {
        flag=1;
        return 0;
        // printf("Not\n");
    }
    for(int i=2; i<n&&flag==0; i++)
    {
        if(n%i==0)
        {
            flag=1;
            return 0;
            // printf("Not\n");
        }
    }

    if(flag==0)
    {
        return n;
        //printf("%d is prime \n",n);
    }


}



// function generateprime 
void generateprime(int n){
    int count=0;
    for(int i=2; n>count; i++)
        {
            if(primefun(i))
            {
                if(count<n)
                {
                    printf("%d  ",i);
                }
                count++;


            }

        }
}

int main()
{

int n;

    while(1)
    {
        printf("\n enter your number :");
        scanf("%d",&n);
        generateprime(n);
    }

 
    return 0;
}


//=========================================================
//task:2 swap function



#include <stdio.h>
#include <stdlib.h>


//function swap 2 variable
void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;


}

int main()
 {

    int n1,n2,r;
    while(1)
    {

          printf("\n enter  n1 :");
          scanf("%d",&n1);
          printf("\n enter  n2 :");
          scanf("%d",&n2);

          swap(&n1,&n2);
          printf("n1=%d    n2=%d",n1,n2);
   }

  return 0;
}
