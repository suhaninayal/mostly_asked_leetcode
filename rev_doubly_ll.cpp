//inserting node at the end of the  doubly linked list
#include<bits/stdc++.h>
using namespace std;

class Node
{    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;

    }

};


Node* rev_doubly_ll(Node* head)
{
   Node* temp=head;
   Node* p=NULL;
   Node* q=NULL;
   while(temp!=NULL)
   {
    p=temp->next;
    temp->prev=p;
    temp->next=q;
    q=temp;
    temp=p;
   }
   head=q;
   return head;
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;
  
    int i=0;
    int n=5;
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
           temp->prev=tail;
            tail=temp;
        }
        i++;
    }
    Node* h=rev_doubly_ll( head);
    Node* p=h;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}