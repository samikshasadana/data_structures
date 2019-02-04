#include<iostream>
using namespace std;
struct node{
	int pr;
	int data;
	struct node* n;
}*start;
class priority_queue{
	public:
		priority_queue(){
			start=NULL;
		}
		void enqueue(int data,int pr);
	//	void deque();
		void display();
};
void priority_queue::enqueue(int data,int pr){
	node * temp,*head,*h;

	if(start==NULL){
		temp->data=data;
		temp->pr=pr;
		temp->n=NULL;
		start=temp;
	}
	else{
		head=start;
		temp->data=data;
		temp->pr=pr;
		temp->n=NULL;
		while(head->n->pr>=temp->pr){
			head=head->n;
		}
		h=head->n;
		head->n=temp;
		temp->n=h;
	}
}
void priority_queue::display()
{
    node * tail=start;
    if(start==NULL)
    {
        cout<<"linked list is empty";
    }
    while(tail!=NULL)
    {
        cout<<tail->data<<"   "<<tail->pr<<endl;
        tail=tail->n;
    }
}

int main(){
	priority_queue q1;
	int n,pri,item;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>item;
		cin>>pri;
		q1.enqueue(item,pri);}
		cout<<endl;
		q1.display();
	//	q1.deque();
		q1.enqueue(14,12);
		q1.display();
	
	
}

