#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void Createnode(node **head,int num){
	node * t=new node;
	t->data=num;
	t->next=NULL;
	if(*head==NULL){
		*head=t;;
	}
	else
	{   node * p=*head;
		while(p->next!=NULL)
		p=p->next;
		p->next=t;
	}
}
void insert(node ** head){
	node *ptr=*head;
	int n,e;
	cout<<"enter no or elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter element"<<endl;
		cin>>e;
		Createnode(&ptr,e);
		*head=ptr;
	}
	
}
void moveToFront(node ** head){
	node*ptr=*head;
	node * p1=*head;
	node * p2=*head;
	cout<<"enter no. of shifts"<<endl;
	int m;
	cin>>m;
	while(p2->next!=0){
		p2=p2->next;
	}
	//cout<<p2->data;
	p2->next=*head;
	while(m!=0){
		p1=p1->next;
		m--;
	}
*head=p1->next;
	p1->next=NULL;
	
}
void printlist(node * p){
	 node * tail=p;
    if(p==NULL)
    {
        cout<<"linked list is empty";
    }
    while(tail!=NULL)
    {
        cout<<tail->data<<"   ";
        tail=tail->next;
    }
}


int main(){
	node * head= NULL;
	insert(&head);
	moveToFront(&head);
	printlist(head);
	return 0;
	
}
