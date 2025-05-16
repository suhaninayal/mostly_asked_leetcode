//reverse the linked list k size
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
Node* get_kth_node(Node* temp,int k)
{
    k=k-1;
    while(temp!=NULL && k>0)
    {
        k--;
        temp=temp->next;
    }
    return temp;
}
Node* kth(Node* head,int k)

{
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        Node* kthnode=get_kth_node(temp,k);
        if(kthnode==NULL)
        {
            if(prev)
            {
                prev->next=temp;
            }
            break;
        }
        Node* nextnode=kthnode->next;
        kthnode->next=NULL;
        rev(temp);
        if(temp==head)
        {
            head=kthnode;
        }
        else
        {
            prev->next=kthnode;
        }
        prev=temp;
        temp=nextnode;
    }
    return head;
}


int main()
{
    int i=0;
    int n=4;
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
    int k=3;
    Node* ans=kth(head,k);
    while(ans!=NULL)
    {
        cout<<ans->data;
        ans=ans->next;
    }

    
}