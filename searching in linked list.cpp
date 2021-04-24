//linear search

bool search(node*head,int key){
    if(head!=NULL){
        while(head!=NULL){
            if(head->data==key){
                return true;
            }
            head=head->next;
        }
    }
    return false;
}

//recursive search

bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}
