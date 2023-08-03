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

void array_selectionSort(int*arr,int size)
{
    int i,j,last=size-1,max=0,c=0,index_m;
    for(i=0;i<size;i++)
    {
        max=arr[0];
        index_m=0;
        for(j=0;j<=last;j++)
        {
            c++;
            if(arr[j]>max)
            {
                max=arr[j];
                index_m=j;
            }
        }
        if(index_m!=last)
        {
         temp=arr[index_m];
        arr[index_m]=arr[last];
        arr[last]=temp;
        }
       
        last--;

    }

printf("\ns=%d  c=%d\n",size,c);
}

void array_countingSort_mono(int*arr,int size)
{
    int i,i_c,count[10]= {0},max=0,c=0;
    for(i=0; i<size; i++)
    {
        c++;
        count[arr[i]]++;
    }
    i=0;
    i_c=0;
    for(i_c=0;i_c<10;i_c++)
    {
       while( count[i_c])
       {
           arr[i]=i_c;
           i++;
           count[i_c]--;
       }
    }
    
}