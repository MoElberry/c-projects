int array_mostRepeated(int*arr,int size,int*pnum)
{
    int i,j,max=0,c=0,count=0;

    for(i=0; i<size; i++)
    {
        count=0;
        for(j=i; j<size; j++)
        {
            c++;
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            *pnum=arr[i];
        }
    }
    printf("s:%d   c: %d\n",size,c);

    return max;
}

int array_mostRepeatedSorted(int*arr,int size,int*pnum)
{
    int i,j,max=0,c=0,count=0;
    for(i=0; i<size; i++)
    {
        c++;
        if(arr[i]==arr[i+1])
        {
            count++;
            if(count>max)
            {
                max=count;
                *pnum=arr[i];
            }
        }
        else
        {
            count=0;
        }
    }
    printf("s:%d   c: %d\n",size,c);
    return max+1;

}

int array_mostRepeatedMono(int*arr,int size,int*pnum)
{
    int i,count[10]= {0},max=0,c=0;
    for(i=0; i<size; i++)
    {
        c++;
        count[arr[i]]++;
    }
    // array_print(count,10);
    for(i=0; i<101; i++)
    {
        c++;
        if(count[i]>max)
        {
            max=count[i];
            *pnum=i;
        }
    }
    printf("s:%d   c: %d\n",size,c);
    return max;
}

int array_mostRepeated2(int*arr,int size,int*pnum)
{
    int i,max=arr[0],count_size,min=0,c=0,max_c=0;
    /* find max number*/
    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    count_size=max-min+1;
    int*count=calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        c++;
        count[arr[i]]++;
    }
    array_print(count,count_size);
    for(i=0; i<count_size; i++)
    {
        c++;
        if(count[i]>max_c)
        {
            max_c=count[i];
            *pnum=i;
        }
    }
    free(count);
    return max_c;

}



int sum_numbers(int n)
{
    int i,sum=0;
    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}

int sum_numbers2(int n)
{
    return (n*(n+1))/2;
}