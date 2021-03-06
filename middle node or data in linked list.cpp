node* middle(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
