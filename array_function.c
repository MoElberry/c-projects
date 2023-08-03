//max number
void print_maxnumber(int*arr,int size)
{
    int i;
    int max=0;
    int max2=0;

    for(i=0; i<size; i++)
    {

          if(arr[i]>=max2&&arr[i]<max)
        {
            max2=arr[i];

        }
        if(arr[i]>=max)
        {
            max=arr[i];

        }



    }
    printf(" max number :%d\n",max);


    printf(" max2 number :%d\n",max2);

}

//===================================================
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