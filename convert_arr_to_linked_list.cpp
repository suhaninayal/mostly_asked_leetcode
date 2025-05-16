//converting array to linked list
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




int main()
{
   Node* head=NULL;
   Node* tail=NULL;
  int arr[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {
    if(head==NULL)
    {
      head=new Node(arr[i]);
      tail=head;
    }
    else
    {
        Node* temp=new Node(arr[i]);
        tail->next=temp;
        tail=temp;
    }
  }
Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data;
    temp=temp->next;
  }
   
}