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

Node* rev(Node* h)
{
  Node * temp=h;
  Node* p=NULL;
  Node* q=NULL;
  while(temp!=NULL)
  {
   q=temp->next;
   temp->next=p;
   p=temp;
   temp=q;
  }
  h=p;
  return h;

}

Node* adding(Node* head,Node* he)
{
    int carry=0;
    Node* h=rev(head);
    Node* t=rev(he);
    Node* dummy=new Node(-1);
    Node* n=dummy;

    
    
   
    
    while(carry||h!=NULL || t!=NULL)
    {
       
    }
 
    if(carry!=0)
    {
        while(h!=NULL)
        {
            int a=h->data+carry;
             Node* b=new Node(a);
            n->next=b;
            n=b;
            h=h->next;
            carry=0;
        }
        while(t!=NULL)
        {
            int a=t->data+carry;
             Node* l=new Node(a);
            n->next=l;
            n=l;
            t=t->next;
            carry=0;
        }
        
    }
  
  node* ans=rev(dummy->next);
  return ans;
  

    
}




  



int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(9);
   
   Node* sixth=new Node(6);

    head->next=second;
    second->next=third;
    third->next=sixth;
    sixth->next=NULL;
   
   Node* h=new Node(5);
   Node* s=new Node(6);
   Node* p=new Node(4);
   Node* l=new Node(9);
   
   h->next=s;
   s->next=p;
   p->next=l;
   l->next=NULL;
   
   Node* ans=adding(head,h);
   Node* t=ans;
   while(t!=NULL)
   {
    cout<<t->data;
    t=t->next;
   }
   
     
    
    
}