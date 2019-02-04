#include<iostream>
using namespace std;
class st
{
    public:
  int top;
  char arr[100];
  st()
  {
    top=-1;
  }
  void push(char);
  char pop();
  int priority(char);
  void expression(char *);
};
void st::push(char item)
{
  top=top+1;
  arr[top]=item;
}
char st::pop()
{
  char b=arr[top];
  top--;
  return b;
}
int st::priority(char p)
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
void st::expression(char ex[100])
{
  char *e,x;
  e=ex;
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
  st s;
  char a[100];
  cout<<"Enter the expression";
  cin>>a;
  s.expression(a);
  return 0;
}
