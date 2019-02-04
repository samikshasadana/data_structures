#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct linked_list
{
    node *head,*tail;
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    node *createnode(int);
    void display();
    void insert_end();
   void del();
};
node *linked_list::createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void linked_list::display()
{
    tail=head;
    if(head==NULL)
    {
        cout<<"linked list is empty";
    }
    while(tail!=NULL)
    {
        cout<<tail->data<<"   ";
        tail=tail->next;
    }
}
void linked_list::insert_end()
{
    int ele,n ;
    node*p,*ptr;
    cout<<"enter no. of elements you want in your list";
    cin>>n;
    for(int i=0;i<n;i++){

    cout<<"enter the element u want to insert at last";
    cin>>ele;
    p=createnode(ele);
    if(head==NULL)
    {
        head=p;;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=p;
    }
    	}
}
void linked_list::del(){
	node * ptr=head;
	head=ptr->next;
}
int main(){
	linked_list l1;
	l1.insert_end();
	l1.display();
	l1.del();
	cout<<endl;
	l1.display();
}
