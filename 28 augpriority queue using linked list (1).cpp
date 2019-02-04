#include<iostream>
using namespace std;
struct node
{
    int pri;
    int data;
    struct node * next;

}*start;
class priority
{
public:
    priority()
    {
        start= NULL;

    }
    void enqueue(int da,int pr)
    {
        struct node *t=new node;
        t->data=da;
        t->pri=pr;
        t->next=NULL;
        struct node * r=start,*k;
        if(start==NULL)
        {
            start =t;
        }
        else if (start->pri > pr) {
        t->next = start;
        start = t;
    }
    else {
        while (r->next != NULL && start->next->pri < pr) {
            r = r->next;
        }
        t->next = r->next;
        r->next = t;
    }
}

    void dequeue()
    {
        if(start==NULL)
	{
		cout<<"underflow\n";
	}
	else
	{
		node *a=start;
		start=start->next;
		delete a;
    }
    }
    void disp()
    {
         if(start==NULL)
cout<<"sorry sir nothing in  the queue"<<endl;
else
{
	node *ptr=start;
	while(ptr->next!=NULL)
	{
		cout<<ptr->data<<" "<<ptr->pri<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<" "<<ptr->pri<<endl;
	//cout<<front->data;
}
    }
};

 int main()
 {
     priority q;
     int n,p,item;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>item;
         cin>>p;
         q.enqueue(item,p);
     }
         //cout<<"hi"<<endl;
         q.disp();
         cout<<endl;
         q.dequeue();
         q.enqueue(14,12);
         q.disp();

 }
