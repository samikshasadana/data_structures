#include<bits/stdc++.h>
using namespace std;

 #define MAX 6
int Stack[MAX];
int top = -1;

void push(int x);
void pop();
void display();

int main ()
{
    int choice, val;
    choice = -1;

    while(choice !=4)
    {
        //cout<<"Choice";
        cin >> choice;
        switch(choice)
        {
            case 1: //cout<<”Enter the element to push”;
                cin>>val;
                push(val);
                break;
            case 2: // cout<<”Enter the element to pop”;
                pop();
                break;
            case 3:// cout<<”Display the stack elements”;
                display();
                break;
            default:
                break;
        }
    }
    return 0;
}
//Add your code here
void push(int x)
{
    top=top+1;
    if(top<MAX-1)
    {

          Stack[top]=x;
    }
    else
    {
        cout<<"Overflow";
    }

}
void pop()
{
    if(top>-1)
    {
        top=top-1;
    }
    else
    {
        cout<<"Underflow";
    }

}
void display()
{
  for(int i=0;i<=top;i++)
  //while(top>-1)
  {
    cout<<Stack[i]<<endl;
  }
}
