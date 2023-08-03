
void push_list(node_t**phead,int data){
  node_t *newnode=create_node(data);
    newnode->next=*phead;
    *phead=newnode;

}


void pop_list(node_t**phead,int *data){

if(*phead==NULLPTR){
    return ;
}
   node_t *temp=*phead;
    *data=(*phead)->data;
    *phead=(*phead)->next;
    free(temp);


}


//================================================================

void DoubleList_Queue_In(dlist_t* list,int data){

dnode_t* newnode=create_dnode(data);
newnode->prev=list->tail;
list->tail=newnode;
if(list->head==NULLPTR){
    list->head=newnode;

}else{
  newnode->prev->next=newnode;
}
list->size++;

}


void DoubleList_Queue_Out(dlist_t** list,int *data){


if(((*list)->head)==NULLPTR){
    return ;
}
   dnode_t *temp=(*list)->head;
    *data=(*list)->head->data;
    (*list)->head=(*list)->head->next;
    free(temp);

(*list)->size--;

}
