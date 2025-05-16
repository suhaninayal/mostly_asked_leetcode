//reverese a linked list
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
    
};


node* rev_linked_list(node* head)
{
    node* p=NULL;
    node* temp=NULL;
    while(head!=NULL)
    {
        temp=head->next;
        head->next=p;
        p=head;
        head=temp;
        
    }
    head=p;
    return head;
}

int main()
{
     node*head=NULL;
     node* tail=NULL;
    struct node* temp=head;
    int i=0;
    while(i<5)
    {
        int v;
        cout<<"enter the v=";
        cin>>v;
        if(head==NULL)
        {
            head=new node(v);
            tail=head;
        }
        else
        {
            node* temp=new node(v);
            tail->next=temp;
            tail=temp;
        }
        i++;
    }
    node* t=rev_linked_list(head);
    node* ti=t;
    while(ti!=NULL)
    {
        cout<<ti->data;
        ti=ti->next;
    }
}





