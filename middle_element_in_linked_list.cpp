//find the middle of the linked list
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


void middle_linked_list(node* head)
{
   node*p=head;
   node*q=head->next;
   while(q->next!=NULL)
   {
    q=q->next;
    p=p->next;

   }
   cout<<p->data;
}

int main()
{
     node*head=NULL;
     node* tail=NULL;
    struct node* temp=head;
    int i=0;
    while(i<4)
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
    middle_linked_list(head);
    return 0;
    
}





