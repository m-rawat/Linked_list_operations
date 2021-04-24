//create the node
class node{
public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};

//insert at tail

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
