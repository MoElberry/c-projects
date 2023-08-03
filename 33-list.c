#include "list.h"



node_t*CreateNode(int data)
{
    node_t*newNode;
   newNode=malloc(sizeof(node_t));
   newNode->data=data;
   newNode->next=NULLPTR;
   return newNode;
}


void list_addNoteToLast(node_t**phead,int data)
{
    node_t*newNode=CreateNode(data);
    node_t*current=*phead;
    if(*phead==NULLPTR)
    {
     newNode->next=*phead;
    *phead=newNode;
        return;
    }
    while(current->next!=NULLPTR)
    {
        current=current->next;
    }
    current->next=newNode;

}
void list_addNoteToFirst(node_t**phead,int data)
{
    node_t*newNode=CreateNode(data);
    newNode->next=*phead;
    *phead=newNode;

}
listStatus_t  list_editNode(node_t*head,int oldData,int data)
{
    if(head==NULLPTR)
    {
        return LIST_EMPTY;
    }
    node_t*current=head;
    while(current!=NULLPTR)
    {
       if(current->data==oldData)
       {
          current->data=data;
          return LIST_DONE;
       }
        current=current->next;
    }
    return NOT_FOUND;

}
void list_print(node_t*head)
{
    node_t*current=head;
    while(current!=NULLPTR)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");

}


listStatus_t list_RemoveData(node_t**phead,int oldData)
{
    node_t*temp;
    node_t*current;
    if(*phead==NULLPTR)
    {
        return LIST_EMPTY;
    }
    else if((*phead)->data==oldData)
    {
        temp=*phead;
        *phead=temp->next;
        free(temp);
    }
    else
    {
        current=*phead;
        while(current->next!=NULLPTR)
        {
            if(current->next->data==oldData)
            {
                temp=current->next;
                current->next=current->next->next;
                free(temp);
                return LIST_DONE;

            }
         current=current->next;
        }
        return NOT_FOUND;

    }


}
