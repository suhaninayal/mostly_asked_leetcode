//inserting a node at the beginning of a linked list
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


Node* insert_at_beginning(Node* head,int value)
{
    Node* temp=new Node(value);
    temp->next=head;
    head=temp;
    return head;
}

int main()
{
    int n=3;
    int i=0;
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


    Node* h=insert_at_beginning(head,5);
    
    Node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}