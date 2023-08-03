
void RotateArray222(int * arr,int size,int n_rotate)
{

    int i;
    int last=size-1;
    n_rotate=n_rotate%size;

    int *arr2=malloc(n_rotate*sizeof(int));


    for(i=0; i<n_rotate; i++)
    {
        arr2[i]=arr[size-n_rotate+i];
    }

    for(i=last; i>0; i--)
    {
        if(i-n_rotate>=0){
         arr[i]=arr[i-n_rotate];
        }

    }

    for(i=0; i<n_rotate; i++)
    {

        arr[i]=arr2[i];
    }



}


int main()
{

    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    print_array(arr,size);
    RotateArray222(arr,size,13);

    print_array(arr,size);



    return 0;

}
