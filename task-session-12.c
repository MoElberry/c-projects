
//task-1

#include <stdio.h>
#include <stdlib.h>


//=================================
int IsPrime(int n)
{
    int i;
    if(n==1||n==0)
    {

        return 0;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {

            return 0;
        }
    }
    return 1;

}
//======================
//print-array

void array_print(int*arr,int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");


}
//=======================


void array_notprime(int*arr,int size){
 int i;

 for(i=0;i<size;i++){

   if(IsPrime(arr[i])==1){
       arr[i]=0;
    }


  }


}

//=========================
int main()
{

      int arr[]={2,3,5,7,6,4,8,11,13,17,19,23,24,25,53,43,22};
      printf("size of arr:%d\n",sizeof(arr)/sizeof(arr[0]));

      array_print(arr,18);
      array_notprime(arr,18);
      array_print(arr,18);



    return 0;
}
//*********************************************************

//task-2


#include <stdio.h>
#include <stdlib.h>


//max number
int max_array(int*arr,int size,int *count)
{
    int i;
    int max=0;
    *count=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];

        }

    }
    for(i=0; i<size; i++)
    {
        if(max==arr[i])
        {

            *count+=1;
        }

    }

    return max;

}

//===================================================
//print-array

void array_print(int*arr,int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");


}

//==================================================
int main()
{
    int max,size;
    int count;
    int arr[]= {2,3,99,7,6,4,8,99,13,17,19,23,24,25,99,43,99};
    size=sizeof(arr)/sizeof(arr[0]);


    array_print(arr,size);

    max=max_array(arr,size,&count);
    printf("max number : %d        count:%d  ",max,count);



    return 0;
}



//***********************************************************
//task-3

#include <stdio.h>
#include <stdlib.h>


//max number
void print_maxnumber(int*arr,int size)
{
    int i;
    int max=0;
    int max2=0;

    for(i=0; i<size; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];

        }


    }
    printf(" max number :%d\n",max);

    for(i=0; i<size; i++)
    {
        if(arr[i]>=max2&&arr[i]<max)
        {
            max2=arr[i];

        }


    }
    printf(" max2 number :%d\n",max2);

}

//===================================================
//print-array

void array_print(int*arr,int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");


}

//==================================================
int main()
{
    int max,size;
    int count;
    int arr[]= {105,36,99,7,6,4,8,22,99,32};
    size=sizeof(arr)/sizeof(arr[0]);


    array_print(arr,size);

    print_maxnumber(arr,size);



    return 0;
}
