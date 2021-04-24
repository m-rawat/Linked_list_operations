//Normal method
void reverse(node*&head){
    node*c=head;
    node*p=NULL;
    node*n;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}


//Recursively reverse linked list
node * recReverse(node*head){
    if(head->next==NULL || head==NULL){
        return head;
    }
    node*shead=recReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return shead;
}
