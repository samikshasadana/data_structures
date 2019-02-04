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
        cout<<"enter size";
        cin>>n;
    }
    void push(int x)
    {
        if(top==n)
            {cout<<"overflow"<<endl;
            display();
            }
        else
        {
            a[top+1]=x;
            top++;
        }
    }
    void pop()
    {
        if(top<0)
        {
            cout<<"underflow";
        }
        else
        {
            top--;
        }
    }
    bool isempty()
    {

        if(top==-1)
            return 0;
        else
            return 1;
    }
    void peak()
    {
        if(top>-1)
            cout<<a[top];
        else
            cout<<"peak not found";
    }
    void display()
    {
            for(int i=top;i>=0;i--)
                cout<<a[i];
    }
};
int main()
{
    int ch,n,i,ele,a;
    cout<<"1-to push the elements"<<endl<<"2-to pop the elements"<<endl<<"3-to check whether the stack is empty or not"<<endl<<"4-to check the peak of the stack"<<endl<<"5-to display"<<endl;
    cin>>ch;
     stack1 s;
     while(ch!=0)
     {
    switch(ch)
    {
    case 1:
            {
                cin>>ele;
                s.push(ele);
            }
            //s.display();
            break;
    case 2:
            s.pop();
            break;
    case 3:

            a=s.isempty();
            if(a==0)
                cout<<"stack is empty";
            else
                cout<<"stack exist";
            break;
    case 4:

            s.peak();
            //s.display();
            break;
    case 5:
        s.display();
    }
    cout<<endl<<"please enter choice again   :)"<<endl;
    cin>>ch;
     }
}
