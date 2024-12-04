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

void insert_at_head(Node *&head,int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
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
        insert_at_head(head,x);
    }
    print(head);
    return 0;
}