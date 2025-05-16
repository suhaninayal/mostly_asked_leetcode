//search in  a single linked list
#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};


bool search(Node* head,int element)
{
   Node* temp=head;
   while(temp!=NULL)
   {
    if(temp->data==element)
    {
        return true;
    }
    temp=temp->next;
   }
   return false;

}

int main()
{
    int i=0;
    int n=5;
    Node* head=NULL;
    Node* tail=NULL;
    while(i<n)
    {
        int val;
        cin>>val;
        if(head==NULL)
        {
            head=new Node(val);
            tail=head;
        }
        else
        {
            Node* temp=new Node(val);
            tail->next=temp;
            tail=temp;
        }
        i++;
    }
  int element=9;
    bool ans=search(head,element);
  cout<<ans;
   
}