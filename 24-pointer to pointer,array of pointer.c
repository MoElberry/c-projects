void swap_char(char*p1,char*p2)
{
    char temp=*p1;
    *p1=*p2;
    *p2=temp;
}
swap_pointers(int **pp1,int **pp2)
{
   // printf("func   %d    %d\n",**pp1,**pp2);
    char *temp;
    temp=*pp1;
    *pp1=*pp2;
    *pp2=temp;
}

void arrayOfPointers_print(char**arr,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        //printf("%d\n",arr[i]);

        string_print(arr[i]);
    }
    printf("============================================================\n");
}

int  array_search(int*arr,int size,int num)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}


int arrayOfPointers_search(char**arr,int size,char*s)
{
     int i;
    for(i=0; i<size; i++)
    {
        if(string_compare(arr[i],s)==1)
        {
            return i;
        }
    }
    return -1;
}

void array_bubbleSort(int*arr,int size)
{
    int i,j,temp,c=0,sortingFlag=0;

    for(j=0; j<size&&sortingFlag==0; j++)
    {
        sortingFlag=1;
        for(i=0; i<size-1-j; i++)
        {
            c++;
            if(arr[i]<arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                sortingFlag=0;
            }
        }

    }
    printf("\ns=%d  c=%d\n",size,c);
}

void arrayOfPointers_bubbleSort(char**arr,int size)
{
   int i,j,c=0,sortingFlag=0;
   char*temp;

    for(j=0; j<size&&sortingFlag==0; j++)
    {
        sortingFlag=1;
        for(i=0; i<size-1-j; i++)
        {
            c++;
            if(string_compare(arr[i],arr[i+1])==-1)
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                sortingFlag=0;
            }
        }

    }

}


void array_rightShiftOnes(int *arr,int size)
{
    int i, temp=arr[size-1];
    for(i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

}
void array_rightShift(int *arr,int size,int numOfShifts)
{
    numOfShifts=numOfShifts%size;
    int i;
    for(i=0;i<numOfShifts;i++)
    {
       array_rightShiftOnes(arr,size);
    }
}


int* circularArrayRotation(int size, int* arr, int k, int queries_count, int* queries, int* result_count) 
{
int i;
array_rightShift(arr,size,k);
*result_count=queries_count;
int*result=malloc(queries_count*sizeof(int));

 for(i=0;i<queries_count;i++)
 {
    result[i]=arr[queries[i]];
 }
 return result;
}