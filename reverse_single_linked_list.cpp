//reverse a single linked list
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


Node* rev(Node* head)
{
   Node * temp=head;
   Node* p=NULL;
   Node* q=NULL;
   while(temp!=NULL)
   {
    q=temp->next;
    temp->next=p;
    p=temp;
    temp=q;
   }
   head=p;
   return head;

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

    Node* h=rev(head);

    Node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}