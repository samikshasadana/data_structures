#include<iostream>
#define SIZE 50
using namespace std;
class node
{
public:
    node()
    {
        next=NULL;
    }
    int data;
    node *next;
}*front=NULL,*rear=NULL;
class circular_queue
{
public:
    void Enqueue();
    void dequeue();
    void disp();
};
void circular_queue::Enqueue()
{

    int ele,c;
    node*p,*ptr, *temp;
    cout<<"enter the element u want to insert at last";
    cin>>ele;

    temp=new node;
    temp->data = ele;
    temp->next=NULL;

    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
        temp->next=front;
    }
}
void circular_queue::dequeue()
{
    node *ptr;
    ptr=front;
    front=ptr->next;
    rear->next=front;
}
void circular_queue::disp()
{
    node *ptr=front;
    if(front==NULL)
    {
        cout<<"underflow";
        //break;
    }
    while(ptr->next!=front)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }
    cout<<ptr->data<<"    ";
    cout<<ptr->next->data;
}
int main()
{
    circular_queue c1;
    int ch;
    cout<<"1-enqueue        2-dequeue       3-display";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            c1.Enqueue();
            break;
        case 2:
            c1.dequeue();
            break;
        case 3:
            c1.disp();
            break;
        }
        cout<<"please enter choice again...."<<endl;
    cin>>ch;
    }

}
