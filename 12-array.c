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

void generatePrime(int n)
{
    int i,c=0;
    for(i=2;c<n;i++)
    {
        if(IsPrime(i))
        {
            printf("%d  ",i);
            c++;
        }
    }
}
void array_print(int*arr,int size)
{
    int i;
   // printf("size=%d",sizeof(arr));
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    // arr[5]=200;

}

int array_sum(int*arr,int size)
{
    int i,sum=0;
    for(i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
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




int array_max(int*arr,int size,int *pindex)
{
    int i,max=arr[0];
    *pindex=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            *pindex=i;

        }
    }
    return max;
}

int array_scan(int*arr)
{
    int i,size;
    printf("enter total numbers\n");
    scanf("%d",&size);
        printf("enter numbers\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return size;
}


int main()
{

int ar3[]={77,1,1,2,2,2,2,1,1,2,3,4,5,2,6,7,5,2,6,2,3,7,4,76,3,6,3,67,3,7,34,44,33,22,1};
int size3=sizeof(ar3)/sizeof(ar3[0]);
printf("%d\n",size3);
return 0;
}