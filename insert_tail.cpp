#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node* next;
    //node constructor
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }

};
void insert_at_tail(Node *&head,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=newNode;
}

void insert_at_any_pos(Node* &head,int pos,int v){
    Node* newNode=new Node(v);
    Node * temp=head;
    for (int  i = 1; i <pos-1; i++)
    {
        temp=temp->next;
        if(temp==NULL){
            return;
        }
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void insert_at_head(Node *&head,int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}

void delete_at_any_pos(Node * head,int pos){
    Node* temp=head;
    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
        if(temp==NULL){
            return;
        }
    }
    if(temp->next==NULL){
        return;
    }
    Node * deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}

void delete_at_head(Node * head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}

void print(Node * head){
    Node * temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    int x;
   while (true)
   {
    cin>>x;
    if(x==-1){
        break;
    }
   }
   
    
    print(head);
    
    return 0;
}