#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=next;
    }

};

void search_element(Node * &head,int val){
    Node * temp=head;
    while (temp->value!=val)
    {
        temp=temp->next;
    }
    cout<<temp->value;
    
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
   int v;
   cin>>v;
   search_element(head,v);
    return 0;
}