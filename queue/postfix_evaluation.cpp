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
    void evaluate(char exp[20])
    {
        char *e;
        int a,b,c;
        e=exp;
        while(*e!='\0')
        {
            //e=e-48;
            if(*e=='+')
            {
                a=pop();
                b=pop();
                c=a+b;
                c=c-48;
                push(c);
            }
            else if(*e=='-')
            {
                a=pop();
                b=pop();
                c=a-b;
                c=c;
                push(c);
            }
            else if(*e=='*')
            {
                a=pop();
                b=pop();
                c=a*b;
                c=c;
                push(c);
            }
            else if(*e=='/')
            {
                a=pop();
                b=pop();
                c=a/b;
                c=c;
                push(c);
            }
            else
            {
                push(*e);
            }
            e++;
        }
        cout<<pop();
    }
};
int main()
{
    stack1 s;
    char a[20];
    cin>>a;
    s.evaluate(a);
}
