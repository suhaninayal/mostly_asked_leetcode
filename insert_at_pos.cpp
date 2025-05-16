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


Node* insert_at_pos(Node* head,int value)
{
    Node* p=head;
    Node* q=NULL;
    int i=1;
    int pos=2;
    Node* temp=new Node(value);
    while(i<pos)
    {
        q=p;
       p=p->next;
       
       i++;
    }
    q->next=temp;
    temp->next=p;
    return head;

}






int main()
{
    int i=0;
    int n=3;
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

    Node* h=insert_at_pos(head,9);

    Node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}