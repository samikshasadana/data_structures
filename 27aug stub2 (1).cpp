#include<iostream>
using namespace std;
struct node
{int info;
struct node * l;
};
struct circular
{struct node * f,*r;
};
void enqueue(circular *q,int e)
{
    struct node *t = new node;
    t->info = e;
    if (q->f == NULL)
        q->f= t;
    else
        q->r->l = t;

    q->r = t;
    q->r->l = q->f;

}
void dequeue(circular *q)
{
     if (q->f == NULL)
    {
         cout<<"sorry sir,queue is empty"<<endl;
    }
    int x;
    if (q->f == q->r)
    {
        x = q->f->info;
        delete(q->f);
        q->f = NULL;
        q->r = NULL;
    }
    else
    {
        struct node *t = q->f;
        x = t->info;
        q->f = q->f->l;
        q->r->l= q->f;
    }

    cout<<x<<endl;

}
void disp(struct circular *q)
{
    struct node *t = q->f;
    cout<<"sir elements in queue are -:"<<endl;
    while (t->l != q->f)
    {
        cout<<t->info<<"->";
        t=t->l;
    }
    cout<<t->info<<endl;


}

int main()
{
    circular *q1=new circular;
    q1->f=q1->r=NULL;
    enqueue(q1,10);
    enqueue(q1,20);
    enqueue(q1,30);
    enqueue(q1,40);
    enqueue(q1,50);
    disp(q1);
    enqueue(q1,60);
    dequeue(q1);
    dequeue(q1);
    disp(q1);


}
