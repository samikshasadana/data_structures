#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
struct linked_list{
node *head,*tail;
linked_list(){
head=nullptr;
tail=nullptr;
}
node *createnode(int);
void middle();
void display();
void inse();

};
node* linked_list::createnode(int x){
node *temp=new node;
temp->data=x;
temp->next=nullptr;
return temp;
}
/*void linked_list:: insert_beg(){
int el,pos;
cout<<"enter in between";
cin>>el;
node *p,*ptr,*ptr1;
ptr=head;

while                                        (ptr->data!=el){
    ptr=ptr->next;
}
ptr1=ptr->next;
ptr->next=p;
p->next=ptr1;
}*/
void linked_list::inse(){
    int el,ell;
    cin>>el;
    node *p,*ptr,*ptr1;
    //ptr=head;
    p=createnode(el);
if(head==nullptr){
    head=p;
}
else{
p->next=head;
head=p;
}
}
void linked_list::middle(){
    node *ptr,*ptr1,*p;
char c;
int i,ele,ell;
cout<<"enter node after";
cin>>ell;
cout<<"want to add?";
cin>>c;
if(c=='y'){
  cout<<"enter in between";
cin>>ele;
p=createnode(ele);
ptr=head;
//ptr1=createnode(i);
while(ptr->data!=ell){
    ptr=ptr->next;
}
ptr1=ptr->next;
ptr->next=p;
p->next=ptr1;
}
else{
    cout<<"carryon";
}
}
void linked_list::display(){
   tail=head;
    if(tail==nullptr){
        cout<<"list is empty";
    }
    while(tail!=nullptr){
    cout<<tail->data;
    tail=tail->next;
    }
}
int main(){
    int ch;
    linked_list l1;
cout<<"enter choice";
    cin>>ch;
    while(ch!=4){
    switch(ch){
    case 1:l1.middle();
    break;
    case 2: l1.display();
    break;
    case 3:l1.inse();
    break;
    case 4:return 0;
    default:cout<<"sorry";
    }
    cout<<"enter your choice";
    cin>>ch;
    }



return 0;
}

