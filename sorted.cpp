#include<iostream>
using namespace std;
struct node{
	struct node *pr;
	int data;
	struct node *n;
};
struct llist{
		node *head,*tail;
	llist(){
	
		head=NULL;
		tail=NULL;
	}
	node * create(int x){
		node * temp=new node;
		temp->pr=NULL;
		temp->data=x;
		temp->n=NULL;
		return temp;
	}
		void disp(){
		if(head==NULL){
			cout<<"list is empty";
		}
		tail=head;
		while(tail!=NULL){
			cout<<tail->data<<endl;
			tail=tail->n;
		}
	}
		void ins_end(){
		int e,n;
		node *p,*ptr;
		cout<<"enter no. of elements ";
		cin>>n;
		for(int i=0;i<n;i++){
			cout<<"enter element";
			cin>>e;
			p=create(e);
			if(head==NULL){
				head=p;
			}
			else
    {
    	ptr=head;
        while(ptr->n!=NULL)
        {
            ptr=ptr->n;
        }
        ptr->n=p;
        p->pr=ptr;
    }
    	}
		
	}
	void ins_btwn(){
		int e;
		cout<<"enter element to insert between";
		cin>>e;
		node *p,*ptr,*ptr1;
		p=create(e);
		if(head==NULL)
		head=p;
		else{
		ptr= head;
		while(e>ptr->n->data && e<ptr->n->n->data)
		ptr=ptr->n;
		ptr1=ptr->n;
		ptr->n=p;
		p->pr=ptr;
		p->n=ptr1;
		ptr1->pr=p;
		}
	}
	
	};
	int main(){
		llist l1;
		l1.ins_end();
		l1.ins_btwn();
		l1.disp();
		return 0;
	}
