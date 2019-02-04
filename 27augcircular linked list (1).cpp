#include<iostream>
#define s 5
using namespace std;
class node
{public:
node()
{
    next=NULL;

}
int data;
node * next;
}*f=NULL,*r=NULL;

class circular
{public:
    int c=0;
node * create(int x)
{node * temp=new node;
temp->data=x;
temp->next=NULL;
return temp;
}
void enqueue()
{int elem;
if(c<s)
{

cout<<"enter element "<<endl;
cin>>elem;
node *p,*ptr;
p=create(elem);
if(f==NULL)
{f=p;
r=p;
c++;
}
else
{ ptr=f;
while(ptr->next!=NULL)
{
    ptr=ptr->next;
    //r=ptr;

}
ptr->next=p;
p->next=NULL;
r=p;
c++;
}

  }
  else
    cout<<"overflow"<<endl;
}
void disp()
{node * t=f;
if(f==NULL)
{cout<<"the list is empty"<<endl;
}
while(t->next!=NULL)
{
    t=t->next;
}
r=t;
t=f;
while(t->data!=r->data)
{cout<<t->data<<" -> ";
t=t->next;
}
cout<<t->data<<" -> "<<endl;
}
void dequeue()
{
  if(f==NULL|| f==r)
  {
    cout<<"\nNo Records to Delete!!!"<<endl<<"underflow"<<endl;
  }
  else
  {
    cout<<"\nData deleted: "<<f->data<<endl;
     f=f->next;
     c--;
     r->next=f;

  }
}
};
int main()
{ cout<<"WELCOME MR. Rishi"<<endl;
 circular l;
int n;
cout<<"enter option"<<endl;
cin>>n;
while(n!=0)
{
if(n==1)
{l.enqueue();
}
else if(n==2)
{cout<<"displaying our list"<<endl;
l.disp();
}
else if(n==3)
    l.dequeue();
else
    cout<<" wrong choice sir..."<<endl;
cin>>n;
}
}
