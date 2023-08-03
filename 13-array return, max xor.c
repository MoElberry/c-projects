void array_removePrime(int*p,int size)
{
    int i;
    //IsPrime(size);
    for(i=0; i<size; i++)
    {
        if(IsPrime(p[i])==1)
        {
            p[i]=0;
        }

    }

}



int array_findRepeatetions(int*arr,int size,int num,int*pindex)
{
    int i,c=0,max=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            c++;
            if(c>max)
            {
                *pindex=i;
                max=c;
            }

        }
        else
        {
            c=0;
        }
    }
    *pindex=*pindex-max+1;
    return max;
}



void array_reverse(int*arr,int size)
{
    int i=0,j=size-1,temp;;
    for(i=0; i<size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }

}

void array_reverse2(int*arr,int size)
{
    int *last=arr+size-1;
    int*first=arr;
    int i,temp;
    for(i=0; i<size; i++)
    {
        temp=*first;
        *first=*last;
        *last=temp;
        first++;
        last--;
    }

}

int array_copy(int*source,int size,int*copy,int maxsize)
{
    int i;
    for(i=0; (i<size)&&(i<maxsize); i++)
    {
        copy[i]=source[i];
    }

    return i;
}




int array_merge(int*ar1,int s1,int*ar2,int s2,int*arr)
{
    int i,j=0;
    int size=s1+s2;
    for(i=0; i<size; i++)
    {
        if(i%2==0)
        {
            arr[i]=ar1[j];
        }
        else
        {
            arr[i]=ar2[j];
            j++;
        }
    }

    return size;

}
int array_merge2(int*ar1,int s1,int*ar2,int s2,int*arr)
{
    int i,j=0;
    int size=s1+s2;
    for(i=0; i<size; i=i+2)
    {
        arr[i]=ar1[j];
        arr[i+1]=ar2[j];
        j++;
    }

    return size;

}

int  array_swap(int*ar1,int s1,int*ar2,int s2)
{
    int i,temp;
    int size;
    if(s1<s2)
    {
        size=s1;
    }
    else
    {
        size=s2;
    }
    for(i=0; i<size; i++)
    {
        swap(&ar1[i],ar2+i);
    }
}

int  array_swap2(int*ar1,int s1,int*ar2,int s2)
{
    int i,temp;

    if(s1!=s2)
    {
        return 0;
    }

    for(i=0; i<s1; i++)
    {
        swap(&ar1[i],ar2+i);
    }
    return 1;
}


int max_xor(int n1,int n2)
{
    int i,j,c=0,r,max=0,max_i,max_j;
    for(i=n1; i<=n2; i++)
    {
        for(j=n1; j<=n2; j++)
        {
            r=i^j;
            if(r>=max)
            {
                max=r;
                max_i=i;
                max_j=j;

            }
            //printf("%d  %d   %d\n",i,j,r);
            c++;
        }
        //printf("\n=============================\n");
    }
    for(i=n1; i<=n2; i++)
    {
        for(j=n1; j<=n2; j++)
        {
            r=i^j;
            if(r==max)
            {
                max=r;
                max_i=i;
                max_j=j;
                printf("%d  %d   %d\n",i,j,r);
            }

            c++;
        }
        printf("\n=============================\n");
    }

    printf("%d^%d=max=%d  c=%d\n",max_i,max_j,max,c);

    return max;
}

int sum_n(int n)
{
    return (n*(n+1))/2;
}
int sum_n2(int n)
{
    int i,sum=0;;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
