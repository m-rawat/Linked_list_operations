void deleteAtTail(node*head){
    if(head!=NULL){
        node*tail=head;
        while(tail->next->next!=NULL){
            tail=tail->next;
        }
        tail->next=NULL;
    }
}
