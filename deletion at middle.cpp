void deleteATMiddle(node*head,int pos){
    if(pos!=0){
        node*temp=head;
        int jump=1;
        while(jump<=pos-1){
            temp=temp->next;
            jump++;
        }
        temp->next=temp->next->next;
    }
    else{
        node*prev=head;
        head=head->next;
        prev->next=NULL;
    }
}
