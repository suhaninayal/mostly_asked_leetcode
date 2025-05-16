//infix to prefix
#include<bits/stdc++.h>
using namespace std;

bool isoperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='/' || c=='*')
{
    return 2;
}
else if (c=='+' || c=='-')
{
    return 1;
}
else
{
    return -1;
}
}

string infix_to_postfix(string infix)
{
    infix= '('+infix +')';
    int l=infix.size();
    stack<char>char_stack;
    string output;

    for(int i=0;i<l;i++)
    {
        if(isalpha(infix[i]) || isdigit(infix[i]))
        {
            output+=infix[i];
        }
        else if(infix[i]=='(')
        {
            char_stack.push('(');
        }
        else if(infix[i]==')')
        {
            while(char_stack.top()!='(')
            {
                output+=char_stack.top();
                char_stack.pop();
            }
            char_stack.pop();
        }
        else
        {
            if(isoperator(char_stack.top()))
            {
                if(infix[i]=='^')
                {
                    while(prec(infix[i])<prec(char_stack.top()))
                    {
                        output+=char_stack.top();
                        char_stack.pop();
                    }
                    
                }
                else
                {
                    while(prec(infix[i])<prec(char_stack.top()))
                    {
                        output+=char_stack.top();
                        char_stack.pop();
                    }
                }
                char_stack.push(infix[i]);
            }
        }
    }

    while(!char_stack.empty())
    {
        output+=char_stack.top();
        char_stack.pop();
    }
    return output;
}

string infix_to_prefix(string infix)
{
    int l=infix.size();
    reverse(infix.begin(),infix.end());

    for(int i=0;i<l;i++)
    {
        if(infix[i]=='(')
        {
                infix[i]=')';
                i++;
        }
        else if(infix[i]==')')
        {
            infix[i]='(';
            i++;
        }
    }
    string prefix=infix_to_postfix(infix);
    reverse(prefix.begin(),prefix.end());
    return prefix;

}

int main()
{
    string s=("(p+q)*(c-d)");
    cout<<"exp"<<infix_to_prefix(s);
    return 0;
    
}