void array_2DselectionSort( char arr[][50],int size)
{
    int i,j,last=size-1,max=0,c=0,index_m;
    for(i=0; i<size; i++)
    {
        index_m=0;
        for(j=0; j<=last; j++)
        {
            c++;
            if(string_compare(arr[j],arr[index_m])==1)
            {
                index_m=j;
            }
        }
        string_swap(arr[index_m],arr[last],30);
        last--;

    }

}
void array_2Dprint(char arr[][50],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<50;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    printf("==========================================\n");
}



int string_compare(char *str1,char*str2)
{
    int i;
 char c1,c2;

       for(i=0; str2[i]||str1[i]; i++)
        {
            c1=str1[i];
            c2=str2[i];
            if(c1)
            if(str1[i]>str2[i])
            {
                return 1;
            }
            else if (str1[i]<str2[i])
            {
                return -1;
            }

        }
        return 0;

}
int string_compareNotCaseSenstive(char *str1,char*str2)
{

}



void string_swap(char*str1,char*str2,int size)
{
    char temp;
    for(int i=0;i<size;i++)
    {
        temp=str1[i];
        str1[i]=str2[i];
        str2[i]=temp;
    }
}