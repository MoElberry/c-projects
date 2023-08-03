
#define  STACK_SIZE   5

typedef struct{
int size;
int sp;
int *dataArr;

}stack_t;

typedef stack_t*   STACK_T;



stack_t* stack_create(int size);

void stack_delete(stack_t* stack);


typedef enum{
STACK_FULL,
STACK_EMPTY,
STACK_DONE
}stackStatus_t;



stackStatus_t push(stack_t* stack,int data);
stackStatus_t pop(stack_t* stack,int*pdata);
