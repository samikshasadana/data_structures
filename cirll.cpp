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
    void insert_beg();
    void display();
    
};
node *linked_list::createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void linked_list::insert_beg()
{
    int ele,n,i;
    node *p,*ptr;
    cout<<"enter the number of elements u want to insert";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ele;
        p=createnode(ele);
        if(head==NULL)
        {
            head=p;
        }
         else
        {
        	ptr=head;
            while(ptr->next!=head){
            	ptr=ptr->next;
			}
				head=p;
			head->next=ptr;
			ptr->next=head;
		
        }
    }
}
void linked_list::display()
{
    tail=head;
    if(head==NULL)
    {
        cout<<"linked list is empty";
    }
    while(tail!=head)
    {
        cout<<tail->data<<"   ";
        tail=tail->next;
    }}

int main(){
	linked_list l;
	l.insert_beg();
	l.display();
	return 0;
}
