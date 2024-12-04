#include<bits/stdc++.h>
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
        if(x==-1)
        {
            break;
        }
        insert_at_tail(head,x);
    }
    print(head);
    return 0;
}