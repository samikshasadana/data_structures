#include<iostream>

using namespace std;

	const int MAX=5;

 struct data
		  {
		   int val,p,o;
		  }d[MAX];

	class pqueue
	{
		  int front,rear;
		public:


		 pqueue()
		 {
			front=rear=-1;
		 }
		 void insert(data d1);
		 data deletion();
		 void display();
	};
	void pqueue :: insert(data d1)
	{
		if(rear==MAX-1)
		   cout<<"\nPriority Queue is Full";
		else
		{
		   rear++;
		   d[rear]=d1;
		   if(front==-1)
			  front=0;
		   data temp;
		   for(int i=front;i<=rear;i++)
			 for(int j=i+1;j<=rear;j++)
			 {
				 if(d[i].p > d[j].p)
				 {
					temp=d[i];
					d[i]=d[j];
					d[j]=temp;
				 }
				 else
				 {
					 if(d[i].p==d[j].p)
					 {
						 if(d[i].o > d[j].o)
						 {
							  temp=d[i];
							  d[i]=d[j];
							  d[j]=temp;
						 }
					 }
				 }
			 }
		}
	}
	data pqueue :: deletion()
	{
		data d1;
		if(front==-1)
		   cout<<"\nPriority Queue is Empty";
		else
		{
		   d1=d[front];
		   if(front==rear)
			  front=rear=-1;
		   else
			  front++;
		}
		return d1;
	}
	void pqueue :: display()
	{
		 if(front==-1)
			 cout<<"\nPriority Queue is Empty";
		 else
		 {
			for(int i=front;i<=rear;i++)
			{
				cout<<"\nObject  :"<<i+1<<endl;
				cout<<"\nValue ="<<d[i].val<<endl;
				cout<<"\nPriority="<<d[i].p<<endl;
				cout<<"\nOrder =  "<<d[i].o<<endl;
			}
		 }
	}
	int main()
	{
	  pqueue p1;

	  data d1;
	  char op;
	  do
	  {
		int ch;


		cout<<"\n----------Menu-------------\n";
		cout<<"\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n";
		cout<<"\nEnter your Choice<1..4> :: ";
		cin>>ch;
		switch(ch)
		{
		   case 1 :  cout<<"\nEnter Value :: ";
					 cin>>d1.val;
					 cout<<"\nEnter Priority :: ";
					 cin>>d1.p;
					 cout<<"\nEnter Order :: ";
					 cin>>d1.o;
					 p1.insert(d1);
					 break;

		   case 2 :  d1=p1.deletion();
					 cout<<"\nValue = "<<d1.val<<endl;
					 cout<<"\nPriority = "<<d1.p<<endl;
					 cout<<"\nOrder = "<<d1.o<<endl;
					 break;

		   case 3 :  p1.display();
					 break;
		  }
		  cout<<"\nDo You Want to Continue <Y/N> :: ";
		  cin>>op;
		}while(op=='Y' || op=='y');
	return 0;
	  }
