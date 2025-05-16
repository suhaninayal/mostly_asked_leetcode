//rotate a linked list
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;
    
    node(int val)
    {
        data=val;
        next=NULL;

    }
};
int ll(node* head)
{
    node* p=head;
    int count=0;
    while(p!=NULL)
    {
         count++;
         p=p->next;
    }
    return count;
}

node* rotate_linked_list(node* head)
{
    node* temp=head;
    node* w=head;
    int count=ll(head);
    int k=4;
    int target=count-k;
    node* p=NULL;
    int i=1;
    while(i!=target)
    {
        temp=temp->next;
        i++;
    }
    p=temp->next;
    node* q=p;
    temp->next=NULL;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    
    q->next=w;
    head=p;
    return head;

}

int main()
{
    int i=0;
    int n=5;
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

    node* ans=rotate_linked_list(head);
    node* s=ans;
    while(s!=NULL)
    {
        cout<<s->data;
        s=s->next;
    }

}