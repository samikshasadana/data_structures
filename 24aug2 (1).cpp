#include<iostream>
#include <Windows.h>
using namespace std;
struct node
{int data;
struct node * next;
};

struct link
{node *h,*t;
link()
{h=NULL;
t=NULL;
}

node * create(int x)
{node * temp=new node;
temp->data=x;
temp->next=NULL;
return temp;
}

void insert()
{int elem;
cout<<"enter element "<<endl;
cin>>elem;
node *p,*ptr;
p=create(elem);
if(h==NULL)
{h=p;
}
else
{//h=ptr;
    ptr=h;
while(ptr->next!=NULL)
{
    ptr=ptr->next;

}
ptr->next=p;
p->next=NULL;

}
}
void disp()
{t=h;
if(h==NULL)
{cout<<"the list is empty"<<endl;
}
while(t!=NULL)
{cout<<t->data<<" -> ";
t=t->next;
}
cout<<h->data<<endl;
}
};
int main()
{int c,i,f=0,sum;
system("color B2");
 cout<<"WELCOME MR. Rishi"<<endl;
 link l;
int n;
cout<<"enter option"<<endl;
cin>>n;
while(n!=0)
{
if(n==1)
{l.insert();
}
else if(n==2)
{cout<<"displaying our list"<<endl;
l.disp();
}
else
    cout<<" wrong choice sir..."<<endl;
cin>>n;
}
}
