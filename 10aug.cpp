#include<iostream>
using namespace std;
class s1
{ public:
    int a[20];
int top,size;
public:
s1()
{
top=-1;
cin>>size;
}
void push(int x)
{if(top==size)
cout<<"overflow "<<endl;
else
{
    a[top+1]=x;
top++;
}
}
bool is_empty()
{if(top==-1)
return 1;
else
return 0;
}
void peak()
{
cout<<top<<a[top];
}
void pop()
{ if(top==-1)
cout<<"underflow sir!"<<endl;
else
{top--;
}
}
void disp()
{cout<<a[top]<<endl;
}
};
int main()
{s1 rk;
int i,n,x;
cout<<"entering elements in stack"<<endl;
for(i=0;i<rk.size;i++)
{cin>>n;
rk.push(n);
}
int c;
while(c!=0)
{
if(c==1)
{cout<<"pop is going to perform"<<endl;
rk.pop();
}
else if(c==2)
{rk.peak();
}
else if(c==3)
{int a=rk.is_empty();
if(a==0)
cout<<"top exists"<<endl;
else
cout<<"its empty"<<endl;
}
else if(c==4)
{rk.disp();
}
cout<<"enter choice again"<<endl;
cin>>c;

}
}
