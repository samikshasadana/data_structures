#include<iostream>
using namespace std;
class queue
{ public:
    int q[20];
    int f,r,n;
    queue()
    {
        f=0;
        r=0;
        cout<<"size of the queue";
        cin>>n;
    }
    void insert(int x)
    {
        if(r==n)
           { cout<<"overflow";
           //break;
           }
        if(f==0)
        {
            f=1;
            r=1;
        }
        else
            r=r+1;

        q[r]=x;
    }
    void del()
    {
        if(f==0)
            cout<<"underflow";
        if(f==r)
        {
            f=0;
            r=0;
        }
        else
            f=f+1;
    }
    void display()
    {
       if(f==0)
            cout<<"underflow";
       int i=f;
       while(i<=r)
       {
           cout<<q[i]<<endl;
           i++;
       }
    }
};
int main()
{
    int ch,ele;
    queue q1;
    cout<<"1-insert         2-delete                    3-display";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            cin>>ele;
            q1.insert(ele);
            break;
        case 2:
            q1.del();
            break;
        case 3:
            q1.display();
            break;
        }
        cout<<"please enter choice again...."<<endl;
    cin>>ch;}
}
