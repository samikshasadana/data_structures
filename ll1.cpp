#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
struct linked_list{
node *head,*tail,*nullptr;
linked_list(){
head=nullptr;
tail=nullptr;
}
node *createnode(int x){
	node* temp=new node;
	temp->data=x;
	temp->next=nullptr;
	return temp;
}
void insert_beg(){
	int e;
	cin>>e;
	node *p,*ptr;
	p=createnode(e);
	if(head==nullptr){
		head=p;
	}
	else
	{
		ptr=head;
		head=p;
		p->next=ptr;
	}
}
void disp(){
	tail=head;
	if(head==nullptr){
		cout<<"ll is empty";
	}
	while(tail!=nullptr){
		cout<<tail->data<<endl;
		tail=tail->next;
	}
}
};
int main(){
	int ch;
	linked_list l1;
	cin>>ch;
	while(ch==0){
		l1.insert_beg();
		cin>>ch;
	}
	l1.disp();
	return 0;
}
