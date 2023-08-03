#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int i,r=1;
    for(i=1; i<=n; i++)
    {
        r=i*r;
    }  
    return r;
}


int pow(int n,int power)
{
    int i,r=1;
    for(i=0;i<power;i++)
    {
        r=r*n;
    }
    printf("%d\n",r);

    return r;
}


int factsum(int n1,int n2)
{
    int r1=fact(n1);
    int r2=fact(n2);
    return r1+r2;
}


void IsPrime2(int n)
{
    int i;
    if(n==1||n==0)
    {
        printf("not prime\n");
        return;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {

          return ;
        }
    }


}

int IsPrime(int n)
{
    int i;
    if(n==1||n==0)
    {

        return 0;
    }
    for(i=2;i<n;i++)
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

}

void print_binary(unsigned int n)
{
    int i,flag=0;
    for(i=31;i>=0;i--)
    {
        if((n>>i)&1)
        {
            printf("1");
            flag=1;
        }
        else
        {
            if(flag==1)
            printf("0");
        }
    }
    printf("\n");
}

void print_binary2(unsigned int n)
{
    int i,flag=0;
    for(i=31;i>=0;i--)
    {
        if((n>>i)&1)
        {
            printf("1");
            flag=1;
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
int add(int n1,int n2)
{
    int r;
    r=n1+n2;
    return r;
}



int main()
{

    int x=5,y=6;
    int i,r=1,r2=1;

	while(1)
	{
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
		{
			if(IsPrime(i))
			{
            printf("%d   ",i);
			}
		}
    printf("\n");
	}
	return 0;
}