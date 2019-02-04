#include<iostream>
#include<string.h>
using namespace std;
struct stack1
{
  int top;
  char arr[100];
  int item;
  stack1()
  {
   top=-1;
  }
  void push(char);
  char pop();
  void reverse1(char *);
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
void stack1::reverse1(char eq[100])
{
    char *e;
    e=eq;
    for(*e;*e!='\0';*e++)
    {
        push(*e);
    }
    for(*e;*e!='\0';*e++)
    {
        cout<<pop();
    }
    while(top!=-1)
    {
        cout<<pop();
    }
}
int main()
{
  char s[100];
  int i;
  cout<<"Enter the string";
  cin>>s;
  stack1 s1;
  s1.reverse1(s);
}
