#include <iostream>
#define size 5
using namespace std;
class node
{
	public:
		node()
		{
			next=NULL;
		}
		int data;
		node *next;
}*front=NULL,*rear=NULL;
class circular_queue
{
	public:
	    int i=0;
		void enque();
		void deque();
		void disp();
};
void circular_queue::enque()
{
	int n;
	cout<<"enter element"<<endl;
	cin>>n;
	node *temp=new node;
	temp->data=n;
	temp->next=temp;
	if(i>size-1)
	{
		cout<<"overflow"<<endl;
	}
	else if(front==NULL)
	{
		rear=temp;
		front=temp;
		i++;
	}
	else
	{
		//node *ptr=front;
		while(rear->next!=front)
		{
			rear=rear->next;
		}
		rear->next=temp;
		temp->next=front;
		rear=temp;
		i++;
	}
}
void circular_queue::deque()
{
	if(front==NULL || i==0)
	{
		cout<<"underflow\n";
	}
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
		i=i-1;
	}
	else
	{
		node *a=front;
		front=front->next;
		delete a;
		rear->next=front;
		i--;
	}
}
void circular_queue::disp()
{ if(i==0)
cout<<"sorry sir nothing in  the queue"<<endl;
else
{
	node *ptr=front;
	while(ptr->next!=front)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<ptr->data<<"->";
	cout<<front->data;
}
}
int main() {
	cout<<"1.enque\n2.deque\n3.display\n4.exit\n";
	int ch;
	cin>>ch;
	//int i=0;
	circular_queue c1;
	while(ch!=4)
	{
		switch(ch)
		{
			case 1:
				c1.enque();
				break;
			case 2:
				c1.deque();
				break;
			case 3:
				c1.disp();
				break;
		}
		cin>>ch;
	}
	return 0;
}
