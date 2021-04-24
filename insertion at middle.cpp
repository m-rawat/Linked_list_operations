//create a node
class node{
public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};

//insert at middle

int length(node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

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

void insertAtMiddle(node*&head,int data,int pos){
    if(head==NULL){
        insertAtHead(head,data);
    }
    else if(pos>length(head)){
        insertAtTail(head,data);
    }
    else{
        int jump=1;
        node*temp=head;
        while(jump<=pos-1){
            temp=temp->next;
            jump++;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
