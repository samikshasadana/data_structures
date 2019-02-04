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
	void del(){
		int e;
		cin>>e;
		ptr=head;
		if(ptr->data>e){
			head=ptr->n;
		
		}
			ptr=head;
		
		while(ptr->n!=NULL){
		
		if(ptr->n->data>e){
			if(ptr->n->n->data>e){
			
			ptr->n=ptr->n->n->n;
			ptr->n->pr=ptr;
			ptr=ptr->n;}
			else{
					ptr->n=ptr->n->n;
			ptr->n->pr=ptr;
			ptr=ptr->n;
			}}
			
		
		else
		ptr=ptr->n;}}
	


};
int main(){
	ll li;
	li.ins();
	li.disp();
	cout<<endl;
	li.del();
//	li.rev();
	li.disp();
	return 0;
}
