#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * next;
};
struct ll{
	node *top;
	ll(){
		top=NULL;
	}
	void insert(){
		int e;
		cout<<"enter element"<<endl;
		cin>>e;
		node *temp= new node;
		temp->data=e;
		temp->next=NULL;
		if(top==NULL){
			top=temp;
		}
		else{
			node * ptr=top;
		/*	while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=temp;*/
			temp->next=ptr;
			top=temp;
		}
	}
	void del(){
		top=top->next;
	}
	void display(){
		node * tail;
		if(top==NULL){
			cout<<"ll is empty";
			
		}
		else{
			tail=top;
			while(tail!= NULL){
				cout<<tail->data<<"    ";
				tail=tail->next;
			}
		}
	}
};
int main(){
	ll l1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
{
		l1.insert();
}
	l1.display();
	l1.del();
	cout<<endl;
	l1.display();
}
