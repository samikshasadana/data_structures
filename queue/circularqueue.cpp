#include<iostream>
using namespace std;
class queue1
{ public:
 int f,r,n;
  int q[30];
    queue1()
    {
        f=-1;
        r=-1;
    cout<<"size of the queue";
        cin>>n;
        int q[n];

    }
    void insert1(int x)
    {
        if(f==-1)
        {
            r=0;f=0;
            q[r]=x;
        }
        else if((r+1)%n==f)
           {
             cout<<"overflow"<<endl;
           }
        else
    {
        //if(f == -1) f = 0;
        //r = (r + 1) % n;
        q[++r] = x;
    }
    }
    void del()
    {
        if(f==-1)
            cout<<"underflow";
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f=(f+1)%n;
    }
    void display()
    {
       if(f==-1)
            cout<<"underflow"<<endl;
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
    queue1 q1;
    cout<<"1-insert         2-delete                    3-display";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            cin>>ele;
            q1.insert1(ele);
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

