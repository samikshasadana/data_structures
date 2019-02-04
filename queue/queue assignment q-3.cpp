#include<iostream>
#define Max 10
using namespace std;
int size = 0;
class Queue
{
struct Node
{
   int data;
   struct Node *next;
}* front, * rear;
public:
	Queue()
	{ front = NULL;
	  rear = NULL;}
void insert(int);
void display();
void reverse();
};
//complete all the functions..
void Queue::insert(int x)
{
	Node *p=new Node;
	p->data=x;
	p->next=NULL;
	
	if(front==NULL)
	{
		front=p;
		rear=p;
	}
	else
	{
		rear->next=p;
		rear=rear->next;
	}
}

void Queue::display()
{
	Node *ptr;
	if(front==0)
	{
		cout<<"queue is empty";
	}
	else
	{
		ptr=front;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
}
void Queue::reverse()
{
	Node *ptr1,*ptr2=NULL,*prev=NULL;

		ptr1=front;
		while(ptr1!=NULL)
		{
			ptr2=ptr1->next;
			ptr1->next=prev;
			prev=ptr1;
			ptr1=ptr2;
				
		}
		front=prev;
	
}
int main()
{
   int ch, value;
   Queue q;
   cin>>ch;
   while(ch>0)
    {
        cin>>value;
        q.insert(value);
        ch--;
    }
        q.display();
        q.reverse();
        cout<<endl;
       q.display();
}

