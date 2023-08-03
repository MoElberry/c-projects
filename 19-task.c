


//1
// array_mostRepeated whith negative number

int array_mostRepeatedNegative(int *arr,int size,int *pnum)
{
    int max_c=0;
    int i,max=arr[0];
    int count_size,min=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    count_size=max-min+1;
    int *count=calloc(sizeof(int),count_size);


    for(i=0; i<size; i++)
    {
        count[arr[i]-min]++;
    }

    for(i=0; i<count_size; i++)
    {
        if(count[i]>max_c)
        {

            max_c=count[i];
            *pnum=i+min;
        }
    }
    free(count);
    return max_c;

}
//***************************************************************************
// 7al gaaaaaaaamed ana hena 7arakt elpointer m4 el data 
//2
// array_mostRepeated whith negative number

int array_mostRepeatedNegative2(int *arr,int size,int *pnum)
{
    int max_c=0;
    int i,max=arr[0];
    int count_size,min=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    count_size=max-min+1;
    int *count=calloc(sizeof(int),count_size);
    int *count2=count-min;

    for(i=0; i<size; i++)
    {
        count2[arr[i]]++;
    }

    for(i=min; i<max; i++)
    {
        if(count2[i]>max_c)
        {

            max_c=count2[i];
            *pnum=i;
        }
    }
    free(count);
    return max_c;

}



//================================================================================

task-2




#include <stdio.h>
#include <stdlib.h>


static int max,min;
void takenumber(int n)
{
    static int flag=0;

    if(flag==0)
    {
        max=n;
        min=n;
        flag=1;
    }
    if(n>max)
    {
        max=n;

    }
    if(n<min)
    {
        min=n;

    }

}

int GetMax(void)
{

    return max;
}

int GetMin(void)
{

    return min;
}



int main()
{
    int max,min;

    takenumber(6);
    takenumber(64);
    takenumber(-2);
    takenumber(14);
    takenumber(20);
    takenumber(3);
    takenumber(90);
    takenumber(-33);

    max = GetMax();
    min = GetMin();
    printf("max is :%d   \nmin is :%d",max,min);
    return 0;
}
