#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
struct queue
{
	node *front;
	node *rear;
	queue()
	{
		rear=NULL;
		front=NULL;
	}
	node *createnode(int);
	void insert_queue();
	void display();
};
node *queue::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void queue::insert_queue()
{
	int ele;
	node *p,*ptr;
	cout<<"enter the element";
	cin>>ele;
	p=createnode(ele);
	if(front==NULL)
	{
		front=p;
		rear=p;
	}
	else
	{
		ptr=front;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=p;
	     p=rear;
	
	
	}
}
void queue::display()
{
	node *ptr;
	if(front==NULL)
	{
		cout<<"queue is empty";
	}
	else
	{
		ptr=front;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			cout<<endl;
			ptr=ptr->next;
		}
	}
}
int main()
{
	queue q;
	int ch;
	cout<<"enter the choice";
	do
	{
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					q.insert_queue();
				
				}
					break;
				case 2:
					{
						q.display();
					
					}
						break;
		}cout<<"enter the choice again";
	}while(ch!=0);
}

