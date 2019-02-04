#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct node
{
   int data;
   node *next;
};
struct link
{  node *front = NULL,*rear = NULL,*p = NULL,*np = NULL;

void push(int x)
{
    np = new node;
    np->data = x;
   np->next = NULL;
  if(front == NULL)
   {
      front = rear = np;
       rear->next = NULL;
   }
   else
   {
       rear->next = np;
       rear = np;
       rear->next = NULL;
   }
}
int remove()
{
  int x;
   if(front == NULL)
    {
        cout<<"empty queue\n";
   }
    else
   {
        p = front;
       x = p->data;
       front = front->next;
      delete(p);
      return(x);
   }
}
};
int main()
{ link l;
    int n,c = 0,x,rk;
    cout<<"Enter the size";
  cin>>n;
  cout<<"enter choice"<<endl;
  cin>>rk;
  while(rk!=0)
  {
    if(rk==1)
  {
      if(c < n)
      {cout<<"insert please"<<endl;
	cin>>x;
       l.push(x);
        c++;
     }
     else
        cout<<"sorry!!! queue is full"<<endl;
  }
     else if(rk==2)
     {cout<<"deletion is as -:";
       if (l.front != NULL)
            cout<<l.remove()<<endl;
       else
       { cout<<"queue is empty :)"<<endl;
           break;
            }
     }
     cout<<"please sir choose again ,0 if you are tired :)"<<endl;
     cin>>rk;
  }
}

