
void array_even_odd(int*arr,int size,int*arrnew)
{
    int f=0,l=size-1,odd=0,even=size-1;

    for(  ; f<size;  )
    {
        if((arr[f]%2)==1)
        {
            arrnew[odd]=arr[f];
            odd++;
        }
        else
        {

        }
        if((arr[l]%2)==0)
        {
            arrnew[even]=arr[l];
            even--;
        }
        else
        {

        }
        f++;
        l--;
    }


}





void string_scan(char*str,int maxsize)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n'&&i<maxsize-1; )
    {
        i++;
        scanf("%c",&str[i]);

    }
    str[i]=0;
}


void intToString(int n,char*str)//1250
{
    int i=0,rem;
    if(n==0)
    {
        str[0]='0';
        str[1]=0;
        return;
    }
    while(n)
    {
        rem=n%10;//5
        rem=rem+'0';
        str[i]=rem;
        i++;
        n=n/10;
    }
    str[i]=0;
    string_reverse(str);

}

int stringToInt(char*str)
{
    int i,n=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            n=n*10+(str[i]-'0');
    }

    return n;
}

int stringToInt2(char*str,int*pnum)
{
    int i,n=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            n=n*10+(str[i]-'0');
        }
        else
        {
            return 0;
        }
    }
    *pnum=n;
    return 1;
}