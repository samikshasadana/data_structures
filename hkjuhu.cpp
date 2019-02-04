#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * next;
};
struct ll{
node * head,*tail;
ll(){
	head=NULL;
	tail=NULL;
}
void insert(){
	int n,e,i;
	cout<<"enter n";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter element";
		cin>>e;
		node*temp=new node;
		temp->data=e;
		temp->next=NULL;
		if(head==NULL){
	cout<<"in head";
		head=temp;	}
		else{
			node*p;
			while(p->next!=NULL)
			{
			p=p->next;}
			p->next=temp;
		}
	}
}
void disp(){
	tail=head;
	if(head==NULL){
		cout<<"empty";
	}
	else
	while(tail->next!=NULL){
		cout<<tail->data;
		tail=tail->next;
	}
	
}
};
int main(){
	ll l;
	l.insert();
	l.disp();
}
