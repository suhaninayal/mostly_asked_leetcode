//implementing stack using linked list
#include<bits/stdc++.h>
using namespace std;

struct StackNode
{
    int data;
    StackNode* next;
    int size;
    StackNode(int d)
    {
        data=d;
        next=NULL;
    }
};

struct Stack
{
    StackNode* top;
    int size;
    Stack()
    {
        top=NULL;
        size=0;
    }
    void Push(int x)
    {
        StackNode* ele=new StackNode(x);
        ele->next=top;
        top=ele;
        cout<<"element pushed"<<"\n";
        size++;
    }
    int Pop()
    {
        if(top==NULL)
        {
            return -1;
        }
        int topdata=top->data;
        StackNode* temp=top;
        top=top->next;
        delete temp;
        size--;
        return topdata;
    }
    int stackSize()
    {
        return size;
    }
    bool stackisempty()
    {
        return top==NULL;
    }

    int stackPeek()
    {
        if(top==NULL)
        {
            return -1;
        }
        return top->data;
    }
    void printstack()
    {
        StackNode* current=top;
        while(current!=NULL)
        {
            cout<<current->data;
            current=current->next;
        }
    }
};

int main()
{
    Stack s;
    s.Push(2);
    cout<<"element popped"<<s.Pop();
    cout<<"stack size"<<s.stackSize();
    cout<<"stack empty or not"<<s.stackisempty();
    cout<<"stack top element"<<s.stackPeek();
}