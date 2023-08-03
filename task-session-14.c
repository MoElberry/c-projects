// task-1
int compare_2string(char *str1,char *str2)
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



int main()
{
    char str1[]="AHMED Ali";
    char str2[]="ahmed ALI";


    int result;
    result=compare_2string(str1,str2);
    if(result==1)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }





    return 0;
}


//====================================================
// task-2



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