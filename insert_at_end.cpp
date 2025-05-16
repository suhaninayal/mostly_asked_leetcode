//inserting node at the end of the linked list
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    public:
    Node( int value)
    {
        data=value;
        next=NULL;
    }

};


Node* insert_at_end(Node *head,int val)
{
    Node* temp=new Node(val);
    Node* t=head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
    return head;
}



int main()
{
     int i=0;
     int n=3;
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

     Node* h=insert_at_end(head,9);

     Node* temp=h;
     while(temp!=NULL)
     {
        cout<<temp->data;
        temp=temp->next;
     }
}