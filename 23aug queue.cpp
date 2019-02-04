#include<iostream>
using namespace std;
int main()
{int a[20],i,f=0,r=0,s,c;
cout<<"enter size please then choice"<<endl;
cin>>s>>c;
while(c!=0)
{
    if(c==1)
{
    cout<<"insertion"<<endl;
if(r==s)
{
    cout<<"overflow"<<endl;
    break;
}
if(f==0)
{
    f=1;
    r=1;
}
else
{
    r=r+1;
}
 cin>>a[r];
}
else if(c==2)
{cout<<"deletion"<<endl;
if(f==0)
    cout<<"underflow"<<endl;
    else if(f<r)
    {cout<<a[f]<<"is deleted"<<endl;
    f=f+1;
}
else if(f==r)
{cout<<a[f]<<"deleted sir...."<<endl;
    f=0;r=0;
}
}
else if(c==3)
    {
        if(f==0)
            cout<<"underflow"<<endl;
        else
        {
            for(i=f;i<=r;i++)
                cout<<a[i]<<endl;
        }
    }
cout<<"enter choice sir"<<endl;
cin>>c;
}
}
