
#include <stdio.h>
#include <stdlib.h>



void RotateArray(int * arr,int size,int n_rotate)
{

    int i,j,temp;
    int last=size-1;
    int c=0;

    n_rotate=n_rotate%size;

    while(n_rotate)
    {


        temp=arr[last];

        for(i=last; i>0; i--)
        {

            arr[i]=arr[i-1];
            c++;

        }
        arr[0]=temp;
        n_rotate--;
    }

    printf("c:%d\n",c);
}


int main()
{

    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    print_array(arr,size);
    RotateArray(arr,size,13);

    print_array(arr,size);



    return 0;

}




