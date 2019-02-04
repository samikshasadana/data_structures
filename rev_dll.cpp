#include<iostream>
using namespace std;
struct node{
	struct node * pr;
	struct node *n;
	int data;
};
struct ll{
	node * head,*tail,*p,*ptr1,*ptr;
	ll(){
		head=NULL;
		tail=NULL;
	}
	void ins(){
		int n,e,i;
		cout<<"enter size of list";
		cin>>n;
		for(i=0;i<n;i++){
			cout<<"enter element";
			cin>>e;
			p=create(e);
			if(head==NULL)
			   {
			   head=p;}
			else{
				ptr=head;
				while(ptr->n!=NULL){
					ptr=ptr->n;
				}
				ptr->n=p;
				p->pr=ptr;
			}
		}
	}
	void disp(){
		if(head==NULL)
		 cout<<"ll is empty";
		else{
			tail=head;
			while(tail!=NULL){
				cout<<tail->data<<endl;
				tail=tail->n;
			}
		}
	}
	node* create(int e){
		node * t=new node;
		t->data=e;
		t->n=NULL;
		t->pr=NULL;
		return t;
		
	}
	void rev(){
		p=head;
		node *b=NULL;
		node *a=NULL;
		while(p!=NULL){
		
		a=p->n;
		p->n=b;
		b=p;
		p=a;
	
		
	}
	
	head=b;}
};
int main(){
	ll li;
	li.ins();
	li.disp();
	cout<<endl;
	li.rev();
	li.disp();
	return 0;
}
