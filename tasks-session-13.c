//task-1
//(1)





void divid_array(int *arr,int size,int *ar1,int *psize1,int *ar2,int *psize2)
{

    int i;
    int j=0,k=0;

    for(i=0; i<size; i++)
    {

        if(arr[i]%2==0)
        {
            ar1[j]=arr[i];
            *psize1=j;
            j++;
        }
        else
        {
            ar2[k]=arr[i];
            *psize2=k;
            k++;
        }

    }

}

int main()
{
    int size;
    int size1=0,size2=0;

    int arr[]= {9,2,5,4,5,7,8,10,9,5,4,4};
    int ar1[50];
    int ar2[50];
    size=sizeof(arr)/sizeof(arr[0]);

    array_print(arr,size);
    devid_array(arr,size,ar1,&size1,ar2,&size2);

    array_print(ar1,size1+1);
    array_print(ar2,size2+1);




    return 0;
}

//=========================================================
//
//task-2

void swap_function(int *n1 ,int *n2);
void swap_array(int *ar1,int *ar2,int size){
 int i=0;
 int j=0;
 

 for(i=0,j=size-1;i<size;i++,j--){

    swap_function(&ar1[i],&ar2[j]);
 }

}

int main()
{


    int size;
    int size1=0,size2=0;

    int ar1[]= {20,30,40,50,60,70,80,90,100};
    int ar2[]={2,3,4,5,6,7,8,9,10};

    size=sizeof(ar1)/sizeof(ar1[0]);

    array_print(ar1,size);
    array_print(ar2,size);

    swap_array(ar1,ar2,size);


    array_print(ar1,size);
    array_print(ar2,size);



   return 0;
}
//==================================================
//task-3



int main()
{
    unsigned int n1,n2;
    int i,sum=0;
    while(1)
    {
        printf("\n enter n1:");
        scanf("%d",&n1);
        printf("\n enter n2:");
        scanf("%d",&n2);

        sum=((n1+n2)*((n2-n1)+1))/2;
        printf("summation = %d",sum);




   }
    return 0;
}