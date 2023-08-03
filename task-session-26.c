
/// task-1
/// print zigzag 2D array

void  zigzag_2Darray_print(int (*arr)[6],int row,int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        if(i%2==0){
            for(j=0; j<col; j++)
        {

            printf("%4d ",arr[i][j]);
        }
            printf("\n");
        }else {

          for(j=col-1; j>=0; j--)
        {

            printf("%4d ",arr[i][j]);
        }
            printf("\n");

        }


    }
    printf("===============================\n");

}



int main()
{

    int index;
    int arr[][6]= {   {1,2,3,4,5,6},          //0
                      {10,20,30,40,50,60},    //1
                      {11,22,33,44,55,66},    //2
                      {70,80,90,100,110,120}, //3
                      {66,77,88,99,40,50},    //4
                      {99,22,55,77,22,33},    //5
                      {10,11,12,13,14,15}     //6
                      };

    zigzag_2Darray_print(arr,7,6);


    return 0;
}

//==============================================================
//==============================================================
//==============================================================
///task-2

/// print symantic  array

int array_symantic(int (*arr)[4],int row,int col)
{
    int x=0,y=0;
    if(row!=col)
    {
        return 0;
    }
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                x+=arr[i][j];
            }
            if(i+j==col-1)
            {

                y+=arr[i][j];
            }

        }

    }


    if(x==y)
    {
        printf("symantic\n");
    }
    else
    {
        printf("not symantic\n");
    }
    printf("x:%d\n",x);
    printf("y:%d\n",y);

    return 1;
}

//============


int main()
{

    int index;
    int arr[][4]= {   {7,2,3,1},
                      {1,0,5,0},
                      {1,3,3,0},
                      {1,0,0,0}
    };

    index=array_symantic(arr,4,4);
    printf("index:%d",index);


    return 0;
}





//==============================================================
//==============================================================
//==============================================================
///task-3
///search about star using binary search  in 2D array

///   print 2D array


void  array2D_print(int (*arr)[100],int row,int col){
int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        printf(" %c ",arr[i][j]);
    }
     printf("\n");

  }
  printf("=====================");

}

/// star set


void  star_set(int (*arr)[100],int row,int col,int star_x,int star_y){
int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){

      if((star_x==i)&&(star_y<j)){
        arr[i][j]='<';
      }else if((star_x==i)&&(star_y>j)){
        arr[i][j]='>';
      }else if((star_x>i)&&(star_y==j)){
        arr[i][j]='v';
      }else if((star_x<i)&&(star_y==j)){
        arr[i][j]='^';
      }else if((star_x<i)&&(star_y<j)){
        arr[i][j]='&';
      }else if((star_x<i)&&(star_y>j)){
        arr[i][j]='%';
      }else if((star_x>i)&&(star_y<j)){
        arr[i][j]='/';
      }else if((star_x>i)&&(star_y>j)){
        arr[i][j]='$';
      }

    }


  }
    arr[star_x][star_y]='*';

}

//======================

///Binary search star find

int star_find_with_BinarySearch(int (*arr)[100],int row,int col,int * star_x,int *star_y){


  int c=0;
  int m_row=row/2;
  int m_col=col/2;
  while((m_row<row)&&(m_col<col))
    {

        if(arr[m_row][m_col]=='*')
        {
            c++;
            *star_x=m_row;
            *star_y=m_col;
            return ;
        }
        else if(arr[m_row][m_col]=='v')
        {
              c++;
            m_row++;
        }else if(arr[m_row][m_col]=='^')
        {
              c++;
            m_row--;
        }else if(arr[m_row][m_col]=='<')
        {
              c++;
            m_col--;
        }else if(arr[m_row][m_col]=='>')
        {
              c++;
            m_col++;
        }else if(arr[m_row][m_col]=='$')
        {
              c++;
            m_row++;
            m_col++;
        }else if(arr[m_row][m_col]=='%')
        {
              c++;
            m_row--;
            m_col++;
        }else if(arr[m_row][m_col]=='/')
        {
              c++;
            m_row++;
            m_col--;
        }else if(arr[m_row][m_col]=='&')
        {
              c++;
            m_row--;
            m_col--;
        }
    printf("counter:%d \n\n",c);
    }


     return -1;
  }


//=======================


int main(){

int find,x,y;
int arr[100][100];


star_set(arr,9,9,6,6);

array2D_print(arr,9,9);

printf(" \n\n");

find=star_find_with_BinarySearch(arr,9,9,&x,&y);


if(find==-1){
    printf("star not found\n");
}else{
 printf("star it founded at index x:%d  y:%d \n",x,y);
}


 return 0;
}




//==============================================================
//==============================================================
//==============================================================



