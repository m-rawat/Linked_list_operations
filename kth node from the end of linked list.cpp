int length(node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

//kth node from the end of linked list
node* kThNode(node*head,int k){
    int len=length(head);
    int jump=1;
    while(jump<=len-k){
        head=head->next;
        jump++;
    }
    return head;
}
