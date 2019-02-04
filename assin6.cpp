#include <iostream>
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
int stack_min();
};

void stackk::push(int val)
{

//write your code here
top=top+1;
a[top]=val;
}

int stackk::stack_min()
{

//write your code here
int min=a[top];
while(top>-1)
{
  if(a[top]<min)
  {
    min=a[top];
  }
  top--;
}
return top;

}

int main() {
    stackk s;
    int n,i,b;
    cin>>n;
    int m;
    for(i=0;i<n;i++)
        {
        cin>>b;
        s.push(b);}
    m=s.stack_min();
    cout<<m;
  return 0;
}
