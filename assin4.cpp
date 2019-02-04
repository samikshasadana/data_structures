#include<iostream>
using namespace std;
struct stack1
{
  int top;
  char arr[100];
  stack1()
  {
   top=-1;
  }
   void push(char);
   void pop();
   void evaluate(char *);
  };
  void stack1::push(char item)
  {
    top=top+1;
    arr[top]=item;
  }
  void stack1::pop()
  {
    top=top-1;
  }
  void stack1::evaluate(char eq[100])
  {
    char *e;
    int c;
    e=eq;
    for(*e;*e!='\0';*e++)
    {
     if(*e!='+' && *e!='-' && *e!='*' && *e!='/' && *e!='^')
     {
       push(*e);
     }
     else
     {
      int a=arr[top];
      pop();
      int b=arr[top];
      pop();
      if(*e=='+')
      {
        c=(b-48)+(a-48);
       push(c+48);
      }
      else if(*e=='-')
      {
       c=(b-48)-(a-48);
       push(c+48);
      }
      else if(*e=='*')
      {
        c=(b-48)*(a-48);
        push(c+48);
      }
      else if(*e=='/')
      {
        c=(b-48)/(a-48);
        push(c+48);
      }
      else if(*e=='^')
      {
        c=(b-48)^(a-48);
        push(c+48);
      }
     }
    }
    cout<<arr[top]-48<<endl;
  }

  int main()
  {
  char a[100];
  cout<<"Enter the expression";
  cin>>a;
  stack1 s;
  s.evaluate(a);
  }
