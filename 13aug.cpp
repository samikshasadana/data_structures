#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class stack1
{
    struct node *top;
    public:
    stack1()
    {
        top=NULL;
    }
    void push();
    void pop();
    void show();
    void rev();
    void sort1();
};

void stack1::push()
{
    int value;
    struct node *ptr;
    cout<<"\nPUSH Operationn";
    cout<<"Enter a number to insert: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top==NULL)
    top=ptr;
    else
    {
        ptr->next=top;
        top=ptr;
    }
    cout<<"\nNew item is inserted to the stack!!!"<<endl;

}

void stack1::pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"\nThe stack is empty!!!";
    }
    temp=top;
    top=top->next;
    cout<<"\nPOP Operation........\nPoped value is "<<temp->data<<endl;
    delete temp;
}

void stack1::show()
{
    struct node *ptr1=top;
    if(top==NULL)
        {
    cout<<"\nThe stack is empty\n";
   }
   else
   {while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }

   }
    //cout<<"NULL\n";
}

void stack1::rev()
{
    node *current = top;
        node *prev = NULL, *next = NULL;


        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        top = prev;
    }
    void stack1::sort1()
    {
        node *ptr, *ptr2;
    int value;
    if (top == NULL)
    {
        cout<<"The List is empty"<<endl;
        return;
    }
    ptr = top;
    while (ptr != NULL)
    {        for (ptr2 = ptr->next;ptr2 !=NULL;ptr2 = ptr2->next)
       {
            if (ptr->data > ptr2->data)
            {   value = ptr->data;
                ptr->data = ptr2->data;
                ptr2->data = value;
            }
        }
       ptr = ptr->next;
    }

    }
int main()
{
    stack1 s;
    int ch;
    cin>>ch;
    while(ch!=0)
    {
        //cin>>ch;
            if(ch==1)
                {s.push();
                }
                else if(ch==2)
                s.pop();
                else if(ch==3)
                s.show();
                else if(ch==4)
                    s.rev();
                    else if(ch==5)
                        s.sort1();
                else
                {
                cout<<"sir/mam koi dawa kaam na aaye,na koi dua lage...mere maalik kisi ko ishq ki hawa na lage.....!!!:) "<<endl;
                break;
                }
                cout<<"\nPlease enter correct choice(1-4)!!";
                cin>>ch;
    }
}
