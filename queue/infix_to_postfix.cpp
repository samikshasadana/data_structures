#include<iostream>
using namespace std;
class stack1
{
     public:
    int a[20];
    int top,n;
    stack1()
    {
        top=-1;
    }
    void push(int x)
    {
            a[++top]=x;
    }
    char pop()
    {
        return a[top--];
    }
    int priority(char p)
    {
        if(p=='(')
            return 0;
        else if(p=='+'||p=='-')
            return 1;
        else if(p=='*'||p=='/')
            return 2;
        else if(p=='^')
            return 3;
    }
    void convert(char expr[20])
    {
        char *e,x;
        e=expr;
        while(*e!='\0')
        {
            if(isalnum(*e))
                cout<<*e;
            else if(*e=='(')
                        push(*e);
            else if(*e==')')
            {
                while((x=pop()) != '(')
                        cout<<x;
            }
            else{ 
                while(priority (a[top])>=priority(*e))
                    cout<<pop();
                push(*e);
            }
            e++;
        }
        while(top!=-1)
        {
            cout<<pop();
        }
    }
};
int main()
{
    stack1 s1;
    char a[20];
    cout<<"enter the expression in infix form:"<<endl;
    cin>>a;
    cout<<"postfix output is:"<<endl;
    s1.convert(a);
}
