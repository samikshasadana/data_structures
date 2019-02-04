#include<iostream>
using namespace std;
struct st
{
  int top;
  char arr[100];
  st()
  {
   top=-1;
  }
   void push(char);
   void pop();
   void infix_eval(char *);
  };
  void st::push(char item)
  {
    top=top+1;
    arr[top]=item;
  }
  void st::pop()
  {
    top=top-1;
  }
  void st::infix_eval(char ex[100])
  {
    char *e;
    int c;
    e=ex;
    while(*e!='\0')
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
     *e++;
    }
    cout<<arr[top]-48<<endl;
  }

  int main()
  {
  char a[100];
  cout<<"Enter the expression";
  cin>>a;
  st s;
  s.infix_eval(a);
  }
