#include<iostream>
#include<string.h>
using namespace std;
struct st
{
  int top;
  char arr[100];
  int item;
  st()
  {
   top=-1;
  }
  void push(char);
  char pop();
  void reverse1(char *);
};
void st::push(char item)
{
  top++;
  arr[top]=item;
}
char st::pop()
{
 char b=arr[top];
 top--;
 return b;
}
void st::reverse1(char ex[100])
{
    char *e;
    e=ex;
    while(*e!='\0')
    {
        push(*e);
        *e++;
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
  st s1;
  s1.reverse1(s);
}
