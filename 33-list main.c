
#include "list.h"

int main()
{
int arr[100];

    node_t* list1=0;
    node_t* list2=0;

  list1=CreateNode(5);
  list1->next=CreateNode(7);
  list1->next->next=CreateNode(17);
  list1->next->next->next=CreateNode(70);
  list1->next->next->next->next=CreateNode(50);
list_addNoteToLast(&list1,55);
list_addNoteToLast(&list1,56);
list_addNoteToLast(&list1,57);
 list_print(list1);
 list_addNoteToFirst(&list1,3);
  list_addNoteToFirst(&list1,13);
   list_addNoteToFirst(&list1,30);
    list_addNoteToFirst(&list1,133);
list_print(list1);
list_print(list2);
 //list_addNoteToFirst(&list2,100);
 list_addNoteToLast(&list2,100);
 list_editNode(list1,57,570);
  list_editNode(list1,133,130);
   list_editNode(list1,133,130);
 list_print(list1);
 list_RemoveData(&list1,130);
 list_print(list1);
 list_RemoveData(&list1,570);
 list_print(list1);
 list_RemoveData(&list1,577);
 list_print(list1);
}
