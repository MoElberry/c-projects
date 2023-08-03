void string_copyNoRepeat(char*str,char* str2)
{
    int i,j,flag=0,k=0;
    for(i=0; str[i]; i++)
    {
        flag=0;
        for(j=0; j<k; j++)
        {
            if(str[i]==str[k])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            str2[k]=str[i];
            k++;
        }
    }
    str2[k]=0;
}
void string_copyNoRepeat2(char*str,char* str2)
{
    char count[256]= {0},i,k=0;
    for(i=0; str[i]; i++)
    {

        if(count[str[i]]==0)
        {
            str2[k]=str[i];
            k++;
            count[str[i]]=1;
        }
    }
    str2[k]=0;

}



int fact(int n)
{
    int i,r=1;
    for(i=1; i<=n; i++)
    {
        r=i*r;

    }
    return r;
}

int fact_r(int n)
{
    if(n==1)
    {
        return 1;
    }
    return fact_r(n-1)*n;
}

int fabo2(int n)
{
    int n0=0;
    int n1=1;
    int n2;
    if((n==0)||(n==1))
    {
        return n;
    }
    for(i=1; i<n; i++)
    {
        n2=n1+n0;
        n0=n1;
        n1=n2;
    }

return n2;

}
int fabo(int n)
{
   if((n==0)||(n==1))
    {
        return n;
    }

    return fabo(n-1)+fabo(n-2);

}
int func55(int x)
{
    if(x==0)
        return 0;
    else
    {
        printf("%d ",x);
        func55(x--);
        printf("%d ",x);
    }
}



int  array_binarySearch(int*arr,int size,int num)
{

    int first,last,middle;
    first=0;
    last=size-1;
    while(first<=last)
    {
        middle=(first+last)/2;

        if(arr[middle]==num)
        {
            return middle;
        }
        else if(arr[middle]>num)
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }
    }
    return -1;

}