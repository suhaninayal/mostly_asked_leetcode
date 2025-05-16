//insertion at a ceertain point
#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node* child;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
        child=NULL;
    }
};

Node* merge(Node* l1,Node* l2)
{
    Node* dummy=new Node(-1);
    Node* r=dummy;
    while(l1!=NULL && l2 !=NULL)
    {
        if(l1->data<l2->data)
        {
            r->child=l1;
            r=l1;
            l1=l1->child;
        }

        else
        {
            r->child=l2;
            r=l2;
            l2=l2->child;
        }
        r->next=NULL;
    }

    if(l1)
    {
        r->child=l1;
    }
    else
    {
        r->child=l2;
    }
    if(dummy)
    {
        dummy->child->next=NULL;
    }
    return dummy->child;
}

Node* fun(Node* head)
{

    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* m=fun(head->next);
    head=merge(m,head);
    return head;
}



int main()
{

   Node* head = new Node(5);
   head->child = new Node(6);
   
   head->next = new Node(10);
   head->next->child = new Node(11);
   
   head->next->next = new Node(12);
   head->next->next->child = new Node(20);
   head->next->next->child->child = new Node(31);
   
   head->next->next->next = new Node(7);
   head->next->next->next->child = new Node(17);

   

    Node* h=fun(head);
    while(h!=NULL)
    {
        cout<<h->data;
        cout<<endl;
        h=h->child;
    }

   
}