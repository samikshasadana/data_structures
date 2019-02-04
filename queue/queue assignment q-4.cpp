
#include<iostream>
using namespace std;

#define MAX 5
int Queue[MAX];
int rear = -1, front = -1;

void Enqueue(int);
void display();
void Dequeue();
void Enqueue(int x)
{
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
		Queue[rear]=x;
	}
}
void display()
{
	if(front==rear)
	{
		cout<<"queue is empty";
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<Queue[i]<<" []";
		}
	}
}
void Dequeue()
{
	if(front==rear)
	{
		front=0;
		rear=0;
	}
	else
	{
		front=front+1;
	}
}

int main() {
    int num;
    int choice;
    do{
        cin >> choice;
        switch(choice){
            case 1:
                cin >> num;
                Enqueue(num);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                display();
                break;
            default:
                ;//do nothing            
        }
    }while(choice != 4);    
}

