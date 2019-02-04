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
	void insert(){
		int e,n;
		node *p;
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
				p->n=head;
				head->pr=p;
				head=p;
			}
		}
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
	void ins_aftr(){
		 int e,x;
    node*p,*ptr1,*ptr2;
    cout<<"enter the element after which u want to insert";
    cin>>x;
    cout<<"enter the element u want to insert";
    cin>>e;
    p=create(e);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        ptr1=head;
        while(ptr1->data!=x)
        {
            ptr1=ptr1->n;
        }
        ptr2=ptr1->n;
        ptr1->n=p;
        p->pr=ptr1;
        p->n=ptr2;
        ptr2->pr=p;
    }
}
void ins_bef(){
	int e,x;
    node *p,*ptr,*ptr1;
    cout<<"enter the element before which u want to insert";
    cin>>x;
    cout<<"enter the element that u want to insert";
    cin>>e;
    p=create(e);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        
       /* ptr1=head;
        while(ptr1->n->data!=x)
        {
            ptr1=ptr1->n;
        }
        ptr=ptr1->n;
        ptr1->n=p;
        p->pr=ptr1;
        
        p->n=ptr;
        ptr->pr=p;
    }*/
    ptr1= head;
    while(ptr1->data!=x)
    ptr1=ptr1->n;
    ptr=ptr1->pr;
    ptr1->pr=p;
    p->n=ptr1;
    p->pr=ptr;
    ptr->n=p;
}
}

	
};
int main(){
	llist l1;
	int ch;
	cout<<"press 1 for begin \n 2 for end \n 3 for insert after \n 4 for insert before";
	cin>>ch;
	if(ch==1)
	{
	l1.insert();}
	if(ch==2)
	{
	l1.ins_end();}
	if(ch==3){
	l1.ins_end();
	l1.ins_aftr();}
		if(ch==4){
	l1.ins_end();
	l1.ins_bef();}
	else
	cout<<"try again";
	l1.disp();
	return 0;
}
