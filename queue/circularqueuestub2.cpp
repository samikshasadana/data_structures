#include<iostream>
using namespace std;
struct Node
{
    int info;
    struct Node *link;
};
struct Circular_Queue
{
    struct Node *f,*r;
};
void Enqueue(Circular_Queue *q1,int ele)
{
    Node *temp;
    temp=new Node;
    temp->info = ele;
    temp->link=NULL;

    if(q1->f==NULL)
    {
        q1->f=temp;
        q1->r=temp;
    }
    else
    {
        q1->r->link=temp;
        q1->r=temp;
        temp->link=q1->f;
    }
}
void Dequeue(Circular_Queue *q1)
{
     Node *ptr;
    ptr=q1->f;
    q1->f=ptr->link;
    q1->r->link=q1->f;
}
void display(struct Circular_Queue *q1)
{
    Node *ptr=q1->f;
    if(q1->f==NULL)
    {
        cout<<"underflow";
    }
    while(ptr->link!=q1->f)
    {
        cout<<ptr->info<<"   ";
        ptr=ptr->link;
    }
    cout<<ptr->info<<"    ";
}
int main()
{
    Circular_Queue *q=new Circular_Queue;
    q->f=q->r=NULL;
    Enqueue(q,10);
    Enqueue(q,20);
    Enqueue(q,30);
    Enqueue(q,40);
    Enqueue(q,50);
    display(q);
    cout<<endl;
    Enqueue(q,100);
    Dequeue(q);
    Dequeue(q);
    display(q);
}
