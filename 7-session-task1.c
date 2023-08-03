#include <stdio.h>
#include <stdlib.h>
// task-1
int main()
{
    while(1)
    {
        int n,b;
        printf("Enter your number:\n");
        scanf("%d",&n);
        printf("number the bit:\n");
        scanf("%d",&b);

        n=n&(~(1<<b));

        printf("New number: %d\n",n);

    }
    return 0;


}