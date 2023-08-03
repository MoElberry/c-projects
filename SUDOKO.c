#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


/// print 2D array

void  array2D_print(int (*arr)[9],int row,int col)
{
	system("cls");
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("\x1b[32m \n");
            printf("%3d ",arr[i][j]);
        }
        printf("\n");

    }
    printf("===============================\n");

}

//=========================================================
int num=0;


int  check(int (*arr)[9],int (*arr2)[9],int row,int col,int star_x,int star_y,int num)
{
    int i,j;

//row

    for(i=star_x,j=0; j<col; j++)
    {
        if(num==arr2[i][j])
        {
            return 0;
        }
        else if(num==arr[i][j])
        {

            return -1;
        }
        else
        {

        }
    }


    //col
    for(i=0,j=star_y; i<row; i++)
    {
        if(num==arr2[i][j])
        {

            return 0;
        }

        else if(num==arr[i][j])
        {
            return -1;
        }
        else
        {

        }

    }
    return 1;

}








//=======================================================

void copy_2d(int (*arr1)[9],int (*arr2)[9],int row,int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            arr2[i][j]=arr1[i][j];
        }
    }
}



//=======================================================
void  modification(int (*arr)[9],int (*arr2)[9],int star_x,int star_y)
{

    if(arr2[star_x][star_y])
    {
        printf("Wrong entry!! \n\n ");
    }
    else
    {
        printf("enter your number : ");
        scanf("%d",&num);


        if(check(arr,arr2,9,9,star_x,star_y,num)==1)
        {
            arr[star_x][star_y]=num;
        }
        else if(check(arr,arr2,9,9,star_x,star_y,num)==-1)
        {
            ///hagayrha 3ady
            arr[star_x][star_y]=num;
            printf("same input in row or col\n");
        }
        else if(check(arr,arr2,9,9,star_x,star_y,num)==0)
        {

            printf("not available change it\n");
        }


    }



}

//======================================================
int finally_check(int (*arr)[9],int row,int col){

int i,j;
int c=0;
int count[9]={0};
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        count[arr[i][j]]++;
    }
}
 c=1;
 for(i=0;i<9;i++){
    if(count[i]==9){
        c++;
       }
    }
  //printf("c=%d\n",c);
    return c;
}

//=======================================================



int main()
{

    int index_x,index_y,c=0;
    int arr[9][9]= {  {5,3,4,6,7,8,9,1,2},
                      {6,0,0,1,9,5,0,0,0},
                      {0,9,8,0,0,0,0,6,0},
                      {8,0,0,0,6,0,0,0,3},
                      {4,0,0,8,0,3,0,0,1},
                      {7,0,0,0,2,0,0,0,6},
                      {0,6,0,0,0,0,2,8,0},
                      {0,0,0,4,1,9,0,0,5},
                      {0,0,0,0,8,0,0,7,9},
                   };

    int arr2[9][9];

    copy_2d(arr,arr2,9,9);

    array2D_print(arr,9,9);


    while(1)
    {

        printf(" row : ");
        scanf("%d",&index_x);
        printf(" col :");
        scanf("%d",&index_y);

        modification(arr,arr2,index_x,index_y);

        array2D_print(arr,9,9);
        c=finally_check(arr,9,9);


       if(c==9){


    //  printf("\x1b[31m");
      printf( "congratulation you are winner\n"  );


        return 0;

    }else{

      // printf("nnnnnnnnnnnnnnnno\n");

    }

    }

    return 0;
}

