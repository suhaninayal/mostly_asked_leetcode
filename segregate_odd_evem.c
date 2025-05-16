//segregate the odd and evens from the linked lists
#include <iostream>
#include <vector>
#include <algorithm>

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


    Node* seg(Node* head)
    {
       Node* evenhead=new Node(-1);
       Node* even=evenhead;
       Node* oddhead=new Node(-1);
       Node* odd=oddhead;

       Node* temp=NULL;
       Node* curr=head;
       while(curr!=NULL)
       {
          temp=curr;
          curr=curr->next;
          temp->next=NULL;


          if(temp->data%2==0)
          {
             even->next=temp;
             even=temp;
          }
          else

          {
            odd->next=temp;
            odd=temp;
          }

       }
       odd->next=NULL;
       even->next=oddhead->next;
       Node* newhead=evenhead->next;
       delete(evenhead);
       delete(oddhead);
       return newhead;
       
       
      
    }

    



int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
   Node* sixth=new Node(6);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
   fifth->next=sixth;
    sixth->next=NULL;
  
   Node* ans=seg(head);
   Node* temp=ans;
   while(temp!=NULL)
   {
    cout<<temp->data;
    temp=temp->next;
   }
   
     
    
    
}