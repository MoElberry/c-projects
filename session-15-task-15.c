//task-1
//




void  intToString(int n,char *str)
{
    int i=0;
    int rem;
    if(n==0)
    {
        str[0]='0';
        str[1]=0;
        return ;
    }
    if(n<0)
    {
        n=n*-1;
        while(n)
        {


            rem=n%10;
            rem=rem+'0';
            str[i]=rem;
            i++;

            n=n/10;
        }
        str[i]='-';
        str[i+1]=0;

        string_reverse(str);



    }
    else
    {

        while(n)
        {

            rem=n%10;
            rem=rem+'0';
            str[i]=rem;
            i++;

            n=n/10;
        }
        str[i]=0;

        string_reverse(str);


    }

}

int main()
{
    int n;
    while(1)
    {

        scanf("%d",&n);
        char str[100];


        intToString(n,str);

         string_print(str);
    }





    return 0;
}









//===========================================================
// task-2

int stringToInt2(char*str,int*pnum)
{
    int i,n=0;
    int x;
    for(i=0; str[i]; i++)
    {
        if(str[0]=='-')
        {

            if(str[i]>='0'&&str[i]<='9')
            {
                n=n*10+(str[i]-'0');
            }
            x=-1*n;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            n=n*10+(str[i]-'0');
            x=n;
        }

        else
        {
            return 0;
        }
    }
    *pnum=x;
    return 1;
}


int main()
{

    char str[]="-1234";
    int x;
    int result;

    result= stringToInt2(str,&x);

    if(result)
    {

        printf("x=%d",x+1);
    }

    return 0;
}