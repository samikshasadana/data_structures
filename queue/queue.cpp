#include<iostream>
using namespace std;
int main()
{
	int q[20];
	int i,n,size;
	cout<<"enter no of elements";
	cin>>n;
	size=n;
	int front=0,rear=0,ch;
	cout<<"enter the choice";
	do
	{
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int element;
				cout<<"enter the element";
				cin>>element;
				if(rear==size)
				{
				cout<<"overflow";	
			}
			if(front==0)
			{
				front=1;
				rear=1;
			}
			else 
			{
				rear=rear+1;
			
			}
				q[rear]=element;
					
					
				
			}
			break;
			case 2:
				{
					if(front==0)
					{
						cout<<"underflow";
					}
					int value=q[front];
					if(front==rear)
					{
						front=0;
						rear=0;
					}
					else
					{
						front=front+1;
					}
					cout<<value;
				}
				break;
			case 3:
				{
					if(front==rear)
					{
						cout<<"queue is empty";
					}
					else
					{
					
					for(int i=front;i<=rear;i++)
					{
						cout<<q[i]<<" ";
					}
				}
				}
				break;
				
	}
}while(ch!=0);
return 0;	
 }
