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


Node* insert_at_end(Node* head,int value)
{
    Node* temp=new Node(value);
    Node* t=head;
    while(t->next!=NULL)
    {
        t=t->next;
        
    }
    t->next=temp;
    temp->prev=t;
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
    Node* h=insert_at_end( head,9);
    Node* p=h;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}