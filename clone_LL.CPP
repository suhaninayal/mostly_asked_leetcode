//clone a linked list with a next and a random pointer using optimised approach
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

Node* fun(Node* head)
{
//inserting the node
Node* temp=head;
while(temp!=NULL)
{
    Node* p=temp->next;
    Node* newnode=new Node(temp->data);
    newnode->next=p;
    temp->next=newnode;
    
    temp=p;
}

Node* t=head;
//random pointer connecting
while(t!=NULL)

{
    Node* copynode=t->next;
    if(t->rand)
    {
    copynode->rand=t->rand->next;
    
    }
    else
    {
        copynode->rand=NULL;
    }
    t=t->next->next;
}

    Node* te=head;
    Node* dummynode=new Node(-1);
    Node* res=dummynode;
    while(te!=NULL)

    {
        res->next=te->next;
        res=res->next;

        te->next=te->next->next;
        te=te->next;


    }
    return dummynode->next;

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