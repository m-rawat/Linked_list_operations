void deleteHead(node*&head){
    if(head==NULL){
        return ;
    }
    node *temp=head;
    head=head->next;
    temp->next=NULL;
}
