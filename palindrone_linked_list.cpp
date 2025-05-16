//palindrome a linked list using slow and fast pointer
#include<bits/stdc++.h>
using namespace std;


class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
node* rev(node* head)
{
   node * temp=head;
   node* p=NULL;
   node* q=NULL;
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


node* middle(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

bool fun(node* head)
{
    node* temp=head;
    node* s=middle(head);
    node* p=s->next;
    s->next=NULL;
    node* res=rev(p);
    while(res!=NULL && temp!=NULL)
    {
        if(res->data!=temp->data)
        {
            return false;
        }
        res=res->next;
        temp=temp->next;
    }
    return true;
}


int main()
{
    int i=0;
    int n=2;
    node* head=NULL;
    node* tail=NULL;
    while(i<n)
    {
        int val;
        cin>>val;
        if(head==NULL)
        {
            head=new node(val);
            tail=head;
        }
        else
        {
            node* temp=new node(val);
            tail->next=temp;
            tail=temp;
        }
        i++;
    }
    bool ans=fun(head);
    cout<<ans;

}