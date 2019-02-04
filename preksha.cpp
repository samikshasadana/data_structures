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
    void insert_end();
    void insert_after();
    void insert_before();
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
            head=p;
            p->next=ptr;
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
void linked_list::insert_after()
{
    int ele,x;
    node*p,*ptr1,*ptr2;
    cout<<"enter the element after which u want to insert";
    cin>>x;
    cout<<"enter the element u want to insert";
    cin>>ele;
    p=createnode(ele);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        ptr1=head;
        while(ptr1->data!=x)
        {
            ptr1=ptr1->next;
        }
        ptr2=ptr1->next;
        ptr1->next=p;
        p->next=ptr2;
    }
}
void linked_list::insert_before()
{
    int ele,x;
    node *p,*ptr,*ptr1;
    cout<<"enter the element before which u want to insert";
    cin>>x;
    cout<<"enter the element that u want to insert";
    cin>>ele;
    p=createnode(ele);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        node* temp;
        ptr1=head;
        while(ptr1->next->data!=x)
        {
            ptr1=ptr1->next;
        }
        temp=ptr1->next;
        ptr1->next=p;
        p->next=temp;
    }
}
int main()
{
    int ch;
    linked_list l1;
    cout<<"enter choice"<<endl<<"1. to insert at begining"<<endl<<"2. to insert at end"<<endl<<"3.insert after the element"<<endl<<"4.insert before the element";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            l1.insert_beg();
            l1.display();
            break;
        }
    case 2:
        {
            //l1.insert_beg();
            l1.insert_end();
            l1.display();
            break;
        }

    case 3:
        {
            l1.insert_beg();
            l1.insert_after();
            l1.display();
            break;
        }
          case 4:
        {
            l1.insert_beg();
            l1.insert_before();
            l1.display();
            break;
        }
    }
}

