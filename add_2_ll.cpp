//add 1 in the linked list


#include<bits/stdc++.h>
using namespace std;

class Node
{    public:
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

Node* adding(Node* head,Node* he)
{
    Node* temp=rev(head);
    Node* semp=rev(he);
    
    
    int carry=0;
    
    Node * dummy=new Node(-1);
    Node* n=NULL;
    n=dummy;
    
    while(temp!=NULL && semp!=NULL)
    {
        int a=temp->data+semp->data+carry;
        if(a<10)
        {
            Node* q=new Node(a);
            carry=0;
            n->next=q;
            n=q;
            carry=0;
        }
        
        else
        {
            carry=a/10;
            Node* q1=new Node(a%10);
            n->next=q1;
            n=q1;
            
        }
        temp=temp->next;
        semp=semp->next;
    }
    while( temp!=NULL)
    {
        int a=temp->data+carry;
        if(a<10)
        {
            carry=0;
            Node* w=new Node(a);
            n->next=w;
            n=w;
        }
        else
        {
            Node* q2=new Node(a%10);
            carry=a/10;
            n->next=q2;
            n=q2;
            
        }
    temp=temp->next;
    }
    
    while(semp!=NULL)
    {
         int a=semp->data+carry;
        if(a<10)
        {
            carry=0;
            Node* w=new Node(a);
            n->next=w;
            n=w;
        }
        else
        {
            Node* q2=new Node(a%10);
            carry=a/10;
            n->next=q2;
            n=q2;
            
        }
    semp=semp->next;
    }
    if(carry!=0)
    {
        Node* l=new Node(carry);
        n->next=l;
        n=l;
        carry=0;
    }
    
    
    Node* ans=rev(dummy->next);
    return ans;
   
    
    
   
    
}




  



int main()
{
    Node* head=new Node(9);
    Node* second=new Node(2);
   // Node* third=new Node(1);
    //Node* sixth=new Node(2);

    head->next=second;
    second->next=NULL;
   // third->next=NULL;
    //sixth->next=NULL;
   
   Node* h=new Node(9);
   Node* s=new Node(9);
   Node* p=new Node(4);
   Node* f=new Node(9);
  
   
   h->next=s;
   s->next=p;
    p->next=f;
    f->next=NULL;
  
   
   Node* ans=adding(head,h);
   Node* t=ans;
   while(t!=NULL)
   {
    cout<<t->data;
    t=t->next;
   }
   
     
    
    
}