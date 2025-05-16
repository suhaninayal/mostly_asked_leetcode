//creating doubly linked list
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
    
    Node* p=head;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}