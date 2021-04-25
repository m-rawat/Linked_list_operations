//Middle point in linked list
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


//Merge two sorted linked list
node * merge(node*head1,node*head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node *c;
    if(head1->data<head2->data){
        c=head1;
        c->next=merge(head1->next,head2);
    }
    else{
        c=head2;
        c->next=merge(head1,head2->next);
    }
    return c;
}


//sort the linked list
node *mergeSort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    //Divide
    node*mid=middle(head);
    node*temp1=head;
    node*temp2=mid->next;
    mid->next=NULL;

    //sort
    temp1=mergeSort(temp1);
    temp2=mergeSort(temp2);

    //merge
    node*ans=merge(temp1,temp2);
    return ans;
}
