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

//insert at head

void insertAtHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return ;
    }
    node *n=new node(d);
    n->next=head;
    head=n;
}
