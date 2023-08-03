// base of 2 using recursive


int baseof2R(int n)
{


    if(n<2)
    {
        return n;

    }
    else if(n%2==1)
    {

        return 0;
    }
    else
    {

        return baseof2R(n/2);
    }


}



//==============================================


// binary search 


int BinarySearch(int *arr,int size,int num)
{


    int first=0,last,middle;
    last=size-1;

    while(first<=last)
    {

        middle=(last+first)/2;

        if(arr[middle]==num)
        {
            return middle;
        }
        else if(arr[middle]>num)
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }



    }



  return -1;

}



//=========================================
// binary search using recursive

int BinarySearch_Rec(int *arr,int first,int last,int num)
{


    int middle;

        middle=(last+first)/2;

        if(arr[middle]==num)
        {
            return middle;
        }
        else if(arr[middle]>num)
        {
            return BinarySearch_Rec(arr,first,middle-1,num);
        }
        else
        {
           return BinarySearch_Rec(arr,middle+1,last,num);
        }


   return -1;
    }


//=====================================================


//task Atm

int Atm_fun(int n,int *n200,int *n100,int *n50,int *n20,int *n10,int *n5,int *n1)
{

    int count=0;
    int num =n;
     *n200=0,*n100=0,*n50=0,*n20=0,*n10=0,*n5=0,*n1=0;
    while(num)
    {

        if((num-200)>=0)
        {
            num=num-200;
            count++;
            (*n200)++;
        }
        else
        {
            if((num-100)>=0)
            {
                num=num-100;
                count++;
                (*n100)++;
            }
            else
            {

                if((num-50)>=0)
                {
                    num=num-50;
                    count++;
                    (*n50)++;
                }

                else
                {


                    if((num-20)>=0)
                    {
                        num=num-20;
                        count++;
                        (*n20)++;
                    }
                    else
                    {
                        if((num-10)>=0)
                        {
                            num=num-10;
                            count++;
                            (*n10)++;
                        }
                        else
                        {
                            if((num-5)>=0)
                            {
                                num=num-5;
                                count++;
                                (*n5)++;
                            }
                            else
                            {
                                num=num-1;
                                count++;
                                (*n1)++;
                            }
                        }
                  }
                }
            }
        }

    }

     return count;
}




