void array2D_print(int arr[][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%5d  ",arr[i][j]);
        }
        printf("\n");
    }
}



void array_2d_search(char page[][50],int line,char ch,int*i_index,int*j_index)
{
    int i,j;
    for(i=0;i<line;i++)
    {
        for(j=0;page[i][j];j++)
        {
            if(page[i][j]==ch)
            {
                *i_index=i;
                *j_index=j;
                return;
            }
        }
    }
    *i_index=-1;
}



void star_set(char arr[][100],int row,int col,int star_x,int star_y)
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if((j==star_y)&&(i<star_x))
            {
                arr[i][j]='v';
            }
            else if((j==star_y)&&(i>star_x))
            {
                 arr[i][j]='^';
            }
            else if((j<star_y)&&(i==star_x))
            {
                arr[i][j]='>';
            }
            else if(((j>star_y)&&(i==star_x)))
            {
                arr[i][j]='<';
            }
            else if((i<star_x)&&(j>star_y))
            {
                arr[i][j]='%';
            }
            else if((i<star_x)&&(j<star_y))
            {
                arr[i][j]='B';
            }
            else if((i>star_x)&&(j>star_y))
            {
                arr[i][j]='A';
            }
            else if((i>star_x)&&(j<star_y))
            {
                arr[i][j]='/';
            }
            else
            {
              arr[i][j]='0';
            }

        }
    }
    arr[star_x][star_y]='*';
}
void star_print(char arr[][100],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%c   ",arr[i][j]);
        }
        printf("\n\n");
    }
    printf("============================================\n");
}

int star_find(,int row,int col,int *star_x,int *star_y,char arr[][col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]=='*')
            {
                *star_x=i;
                *star_y=j;
                return 1;
            }
        }
    }
    return 0;
}



/***************************** 2d dynamic  ******************************************/
 int (*p)[10]=malloc(10*10*sizeof(int));
   
    
 
    
    int**p3=malloc(5*sizeof(int*));
    for(int i=0;i<5;i++)
    {
        p3[i]=malloc(10*sizeof(int));
    }
/***************************** ********** ******************************************/

    int arr[5][10]={{10}};

    printf("%d    %d    %d    %d    %d   %d\n",
           &arr,arr,&arr[0],arr[0],&arr[0][0],arr[0][0]);

 printf("%d    %d    %d    %d    %d   %d\n",
           &arr+1,arr+1,&arr[0]+1,arr[0]+1,&arr[0][0]+1,arr[0][0]+1);

/***************************** ********** ******************************************/