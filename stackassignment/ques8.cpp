#include<iostream>
using namespace std;
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void push(int value)
{

    //write your code
    top=top+1;
    stack[top]=value;
}

void pop()
{
//write your code
  top--;
}

void display()
{
//write your code
  int i;
  i=top;
  while(i!=-1)
  {
    cout<<stack[i];
    i--;
  }

}

int main()
{
    int i, j, n, data;
    cin>>n;
    for (i=1; i<=n; i++)
    {
       cin>>j;
cout<<" " ;

       if(j==1)
       {
cin>>data;
           push(data);
       }
       if(j==0)
       {
           pop();
       }
    }
    display();
}
