#include<iostream>
using namespace std;

using namespace std;
#define size 20
class stackk
{
int a[10];
int top;
public:
stackk()
{
top=-1;
}
void push(int);
int stack_max();
};
void stackk::push(int val)
{
  top=top+1;
  a[top]=val;
}
int stackk::stack_max()
{
int max=a[top];
while(top>-1)
{
 if(a[top]>max)
 {
   max=a[top];
 }
 top--;
}
return max;
}

int main()
 {
    stackk s;
    int n,i,b;
    cin>>n;
    int m;
    for(i=0;i<n;i++)
        {
        cin>>b;
        s.push(b);}
    m=s.stack_max();
    cout<<m;
  return 0;
}

