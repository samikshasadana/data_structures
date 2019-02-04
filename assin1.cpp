#include<iostream>
using namespace std;
class stack1
{
    public:
  int top;
  char arr[100];
  stack1()
  {
    top=-1;
  }
  void push(char);
  char pop();
  int priority(char);
  void expression(char *);
};
void stack1::push(char item)
{
  top=top+1;
  arr[top]=item;
}
char stack1::pop()
{
  char b=arr[top];
  top=top-1;
  return b;
}
int stack1::priority(char p)
{
 if(p=='(')
 {
   return 0;
 }
 else if(p=='+' || p=='-')
 {
   return 1;
 }
 else if(p=='*' || p=='/')
 {
   return 2;
 }
 else if(p=='^')
 {
   return 3;
 }
}
void stack1::expression(char eq[50])
{
  char *e,x;
  e=eq;
  while(*e!='\0')
  {
    if(isalnum(*e))
    {
      cout<<*e;
    }
    else if(*e=='(')
    {
      push(*e);
    }
    else if(*e==')')
    {
      while((x=pop())!='(')
      {
        cout<<x;
      }
    }
    else
    {
      while(priority (arr[top])>=priority(*e))
      {
        cout<<pop();
      }
      push(*e);
    }
    e++;
  }
  while(top!=-1)
  {
    cout<<pop();
  }
}
int main()
{
  stack1 s;
  char a[100];
  cout<<"Enter the expression";
  cin>>a;
  s.expression(a);
  return 0;
}
