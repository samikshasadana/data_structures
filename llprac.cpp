#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
struct linked{
	node * head=NULL;
	node * p,*ptr;
	node * create(int x){
		node * temp=new node;
		temp->data=x;
		temp->next=NULL;
	}
	void insertbeg(int x){
		if(head==NULL){
			head=create(x);
		}
		else{
			p=head;
			head=create(x);
			head->next=p;
		}
	}
	void insert(int x){
		if(head==NULL){
			head=create(x);
		}
		else{
			ptr=create(x);
			p=head;
			while(p->next!=NULL)
			p=p->next;
			p->next=ptr;
		}
	}
	void disp(){
		ptr=head;
		if(head==NULL)
		cout<<"ll is empty";
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
	void rev(){
		p=head;
		node *b=NULL;
		node *a=NULL;
		while(p!=NULL){
		
		a=p->next;
		p->next=b;
		b=p;
		p=a;
	
		
	}
	
	head=b;}

};
int main(){
	int n,e;
	linked l;
	cin>>n;
	cin>>e;
		l.insertbeg(e);
	for(int i=0;i<n-1;i++){
		cin>>e;
		l.insert(e);
	}
	l.disp();
	l.rev();
	l.disp();
}
