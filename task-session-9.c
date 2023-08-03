
#include <stdio.h>
#include <stdlib.h>


int main()
{
    // task long long pointer

    long long a =72340172838076673;


    char *p=&a;
    for(int i=0; i<8; i++)
    {

        printf("%d   ",*p);
        p++;
    }

  return 0;
}