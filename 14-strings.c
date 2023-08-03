#include <stdio.h>
#include <stdlib.h>

int string_len(char*str)
{
    int i;
    for(i=0;str[i]; i++);

    return i;
}

void string_print(char*str)
{
    int i;

    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    /*int l=string_len(str);
    printf("f:sizeof: %d\n",sizeof(str));
    printf("f:string len:%d\n",l);*/

}


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


int string_compare3(char *str1,char*str2)
{
    int i;
    int l1=string_len(str1);
    int l2=string_len(str2);

    if(l1!=l2)
    {
        return 0;
    }
    else
    {
        for(i=0; str1[i]; i++)
        {
            if(str1[i]!=str2[i])
            {
                return 0;
            }

        }
        return 1;
    }

}

int string_compare(char *str1,char*str2)
{
    int i;

       for(i=0; str2[i]||str1[i]; i++)
        {
            if(str1[i]!=str2[i])
            {
                return 0;
            }

        }
        return 1;

}
int string_compareNotCaseSenstive(char *str1,char*str2)
{

}
