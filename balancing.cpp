#include<iostream>
using namespace std;

class s1
{
    char a[20];
    int top;
    public:
    s1()
    {
       top=-1;
       //cin>>s;
    }
    void push(int x)
    {
            a[++top]=x;
            //top++;
    }
    char pop()
    {
        return a[top--];
    }
    void in_po(char exp[20])
    {
        char *e;
        char x;
        int r;
        e=exp;
        int count=1;
        while(*e!='\0')
        {
            if(*e=='(' || *e=='[' || *e=='{')
            {
                push(*e);
            }
            else if(*e==')')
            {
                if((x=pop())=='(')
                count=2;
                else
                {
                    //cout<<"Not balanced";
                    count=1;
                    break;
                }
            }
            else if(*e==']')
            {
                if((x=pop())=='[')
                count=2;
                 else
                {
                    //cout<<"Not balanced";
                    count=1;
                    break;
                }
            }
            else if(*e=='}')
            {
                if((x=pop())=='{')
                count=2;
                 else
                {
                    //cout<<"Not balanced";
                    count=1;
                    break;
                }
            }
            e++;
        }
        if(count%2==0 && top==-1)
        {
            cout<<"Equation is balanced";
        }
        else
        {
            cout<<"Not balanced";
        }
       /* while(top!=-1)
        {
            cout<<pop();
        }*/
    }
};
    int main()
    {
        s1 r;
        char ss[20];
        cin>>ss;
        r.in_po(ss);
    }

