#include<iostream>
using namespace std;
struct stackk
{
  int top,top1;
  int arr[100];
  int n;
  stackk()
  {
    cout<<"Enter the size of array";
    cin>>n;
    top=-1;
    top1=n;
  }
  void push(int);
  void push1(int);
  void pop();
  void pop1();
  void display();
};
void stackk::push(int x)
{
  if(top1-top==1)
  {
    cout<<"Overflow";
  }
  else
  {
    top++;
    arr[top]=x;
  }
}
void stackk::push1(int x)
{
if(top1-top==1)
  {
    cout<<"Overflow";
  }
else
 {
    top1--;
    arr[top1]=x;
 }
}
void stackk::pop()
{
  if(top==-1)
  {
    cout<<"Underflow";
  }
  else
  {
    top--;
  }
  cout<<"Popped elements from stack1"<<arr[top+1];
}
void stackk::pop1()
{
  if(top1==n)
  {
    cout<<"Underflow";
  }
  else
  {
    top++;
  }
  cout<<"Popped elemenets from stack2"<<arr[top-1];
}
void stackk::display()
{
 int i;
 for(i=top;i<n;i++)
 {
   cout<<arr[i]<<" ";
 }
 for(i=top;i>=0;i--)
 {
   cout<<arr[i]<<" ";
 }
}
int main()
{
  stackk s;
  int ch,x;
  cin>>ch;
  while(ch!=5)
  {
    cout<<"1.Push\n2.Push1\n3.pop\n4.pop1\n5.Display";
    cin>>ch;
    switch(ch)
    {
      case 1:
             cout<<"Enter the item";
             cin>>x;
             s.push(x);
             break;
      case 2:
             cout<<"Enter the second push item";
             cin>>x;
             s.push1(x);
             break;
      case 3:
            s.pop();
            break;
      case 4:
            s.pop1();
            break;
      case 5:
            s.display();
            break;
      default:
             cout<<"Wrong choice";

    }
  }
}
