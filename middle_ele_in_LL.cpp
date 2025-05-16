//middle element in the linked list

#include<bits/stdc++.h>
using namespace std;

class Node
{    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;

    }

};


int middle_ele(Node* head)
{
   
   Node* fast=head;m
   Node* slow=head;
   while( fast!=NULL&& fast->next!=NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
   }
   return slow->data;
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;
  
    int i=0;
    int n=6;
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
           temp->prev=tail;
            tail=temp;
        }
        i++;
    }
    int ans=middle_ele( head);
    cout<<ans;
    
}