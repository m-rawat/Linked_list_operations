void insertAtHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return ;
    }
    node *n=new node(d);
    n->next=head;
    head=n;
}
