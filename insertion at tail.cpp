void insertAtTail(node*&head,int data){
    if(head==NULL){
        head=new node(data);
        return ;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return ;
}
