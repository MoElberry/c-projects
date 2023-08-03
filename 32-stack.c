
#include"stack.h"

/*
static int stack[STACK_SIZE];
static int sp;





stack_t* stack_create(int size)
{
   stack_t* s=malloc(sizeof(stack_t));
   s->size=size;
   s->sp=0;
   s->dataArr=malloc(size*sizeof(int));
   return s;

}



void stack_delete(stack_t** stack)
{

    free(*stack->dataArr);
    free(*stack);
    *stack=0;
}










stackStatus_t push(stack_t* stack,int data)
{
    if(stack->sp<stack->size)
    {
      stack->dataArr[stack->sp++]=data;

      return STACK_DONE;
    }
    else
    {
        return STACK_FULL;
    }

}

stackStatus_t pop(int*pdata)
{
    stackStatus_t status=STACK_DONE;
    if(sp>0)
    {
        *pdata=stack[--sp];
    }
    else
    {
        status= STACK_EMPTY;
    }
    return status;
}


*/
