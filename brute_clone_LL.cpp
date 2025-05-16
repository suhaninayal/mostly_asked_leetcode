//clone a linked list with a next and a random pointer
#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node* rand;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
        rand=NULL;
    }
};

Node* f(Node* head)
{
    Node* p=head;
    while(p!=NULL)
    {

    }
}


Node* fun(Node* head)
{
    unordered_map<Node* ,Node* >mpp;
    Node* temp=head;
    Node* n=NULL;
    while(temp!=NULL)
    {

        Node* newnode=new Node(temp->data);
       b
        mpp[temp]=newnode;
        temp=temp->next;

    }
    
    //random pointer
    temp=head;
    while(temp!=NULL)
    {
        Node* p=mpp[temp];
        p->next=mpp[temp->next];
        p->rand=mpp[temp->rand];

        temp=temp->next;
    }
    temp=head;
    return mpp[temp];
    
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

    Node* h=fun(head);

    Node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}