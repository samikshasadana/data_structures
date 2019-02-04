#include<iostream>

using namespace std;
int main()
{
 int a[30];
 int i,top1=0,top2=0,j,s;
 cin>>s;
 cout<<"enter elements in stack 1"<<endl;
 for(i=0;i<s/2;i++)
       {cin>>a[i];
       top1=top1+1;
       }
        for(i;i<s/2;i++)
       {cin>>a[i];
       top2=top2+1;
       }

 cout<<"enter p1,p2 from stack 1 and stack 2"<<endl;
 cin>>p1;
 cin>>p2;
 for(i=0;i<s/2;i++)
 {
     if(a[top1]==p1)
        {cout<<"element found "<<endl;
        top1--;
        for(i=0;i<(s/2)-1;i++)
            cout<<a[i]<<" ";
        break;
        }
}
for(i=s/2;i<s;i++)
 {
     if(a[top2]==p2)
        {cout<<"element found "<<endl;
        top1--;
        for(i=s/2;i<(s)-1;i++)
            cout<<a[i]<<" ";
        break;
        }
}

}
