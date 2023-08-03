
/// queue.c
#include <stdio.h>
#include <stdlib.h>
#include"queue2.h"


int arr[QUEUE2_SIZE];

int in;
int out;
int c_flag;

queue_t qin(int data)
{

    if(in>=QUEUE2_SIZE)
    {
        c_flag=1;
        in=0;
    }


    if(in==out && c_flag==1)
    {
        return QUEUE2_EMPTY;

    }
    else if(in<QUEUE2_SIZE)
    {
        arr[in]=data;
        in++;
        return QUEUE2_DONE;
    }


}



queue_t qout(int* data)
{

    if(out>=QUEUE2_SIZE)
    {
        c_flag=0;
        out=0;
    }


    if(in==out && c_flag==0)
    {
        return QUEUE2_EMPTY;
    }
    else if( out>=0 )
    {

        *data=arr[out];
        out++;
        return QUEUE2_DONE;
    }


}


//===================================================================================
//queue.h

#include <stdio.h>
#include <stdlib.h>

#define QUEUE2_SIZE 10

typedef enum{
 QUEUE2_FULL,
 QUEUE2_EMPTY,
 QUEUE2_DONE
}queue_t;


queue_t qin(int data);


queue_t qout(int* data);

//====================================================================================
//main


#include <stdio.h>
#include <stdlib.h>
#include"queue2.h"




int main()
{
    int num,n;
    printf("enter any number to in Queue or  zero to out Queue : ");
    while(1)
    {
        scanf("%d",&num);
        if(num!=0)
        {

            if(qin(num)==QUEUE2_DONE)
            {

                printf("%d is in queue \n",num);
            }
            else
            {
                printf("queue full\n");
            }
        }
        else
        {



            if(qout(&n)==QUEUE2_DONE)
            {

                printf("%d is out of queue \n",n);

            }
            else
            {
                printf("queue empty\n");


            }
        }


    }
    return 0;
}
