

#include <stdio.h>
#include <stdlib.h>



//string_length

int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);

    return i;
}



//=====================================
//string print


void string_print(char*str)
{
    int i;

    for(i=0; str[i]; i++)
    {
        printf("%c ",str[i]);
    }
    printf("\n");


}


//=================================



void string_reverse(char*str)
{
    int temp,i,j=string_len(str);
    j--;
    for(i=0; i<=j; i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

}

//==============================

// string_upperToLower
void string_upperToLower(char*str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }

    }

}


//===================================================
/*

int string_compareNotCaseSenstive(char *str1,char *str2)
{
    int i;
    for(i=0; str1[i]||str2[i]; i++)
    {

        if(str1[i]>='A'&&str1[i]<='Z')
        {
            str1[i]=str1[i]-'A'+'a';
        }
        if(str2[i]>='A'&&str2[i]<='Z')
        {
            str2[i]=str2[i]-'A'+'a';
        }

        if(str1[i]!=str2[i])
        {
            return 0;
        }

    }
    return 1;

}





*/





//================================================


/*

//print-array

void array_print(int*arr,int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");


}
//====================================================

//swap-function

void swap_function(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;

}
*/
//========================================================


/*


int OddEven_array(int *arr,int size,int *ar1)
{

    int i;
    int j=0,k=0;

    for(i=0,k=size-1; i<size; i++)
    {

        if(arr[i]%2==1)
        {
            ar1[j]=arr[i];
            j++;

        }
        if(arr[size-i-1]%2==0)
        {
            ar1[k]=arr[size-i-1];
            k--;
        }

    }
    return size;
}



int main()
{
    int size;
    int size1=0;

    int arr[]= {9,2,5,4,5,7,8,10,9,5,4,4};
    int ar1[50];

    size=sizeof(arr)/sizeof(arr[0]);
    size1=divid_array(arr,size,ar1);

    array_print(arr,size);


    array_print(ar1,size1);





    return 0;
}

*/

//===========================================================

/*

// task

int stringToIntwithnegative(char*str,int*pnum)
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

    result= stringToIntwithnegative(str,&x);

    if(result)
    {

        printf("x=%d",x+1);
    }

    return 0;
}


*/

//===========================================

void string_scan(char*str,int max_size)
{

    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n'&&i<max_size-1;)
    {

        i++;
        scanf("%c",&str[i]);


    }
    str[i]=0;

}


/*
int main(){
 char str[5]={0};
 while(1){


      //scan string
      string_scan(str,5);
      //gets(str);


      //print string
     string_print(str);
    // printf("%s\n",str);
    // puts(str);

 }

return 0;
}








*/

//======================

/*
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


*/




//===============================
/*
int StringToInt(char *str)
{
    int i=0;
    int n=0;

    for(i=0; str[i]; i++)
    {

        if(str[i]>='0'&&str[i]<='9')
        {
            n = n*10 +(str[i]-'0');
        }
    }
    return n;
}



int main()
{
    int n;
    char str[]="12h4";
    n=StringToInt(str);
    printf("n = %d",n);

    return 0;
}

*/
//====================================

int StringToInt2(char *str,int*num)
{
    int i=0;
    int n=0;
    int x;
    for(i=0; str[i]; i++)
    {
        if(str[0]=='-')
        {

            if(str[i]>='0'&&str[i]<='9')
            {
                n = n*10 +(str[i]-'0');
            }
            x=n*-1;

        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            n = n*10 +(str[i]-'0');

            x=n;
        }
        else
        {
            return 0;
        }
    }
    *num=x;

    return 1;
}



int main()
{
    int n;
    char str[200];
    while(1)
    {

        string_scan(str,100);
        if(StringToInt2(str,&n))
        {
            printf("%d\n",n);
        }
        else
        {
            printf("wrong string!\n");
        }

    }



    return 0;
}



