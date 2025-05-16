//insertion at a ceertain point
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


Node* del_at_pos(Node* head)
{
   Node* t=head;
   Node* p=NULL;
   int i=0;
   int pos=3;
   while(i!=pos-1)
   {
      p=t;
      t=t->next;
      i++;
   }
   p->next=t->next;
   delete(t);
   return head;

}






int main()
{
    int i=0;
    int n=5;
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

    Node* h=del_at_pos(head);

    Node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}