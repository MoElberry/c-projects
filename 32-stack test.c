
int main()
{
int x,y;
    printf("enter any number to push in stack zero to pop\n ");
     while(1)
     {

         scanf("%d",&x);
         if(x!=0)
         {
             if(push(x)==STACK_FULL)
             {
                 printf("stack full\n");
             }
             else
             {
                 printf("%d is pushed\n",x);
             }
         }
         else
         {
             if(pop(&y)==STACK_EMPTY)
             {
                 printf("stack empty\n");
             }
             else
             {
                 printf("%d poped\n",y);
             }
         }



     }
    return 0;
}
