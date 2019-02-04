//wap to check the balanced parathesis in an expression using stack
#include<iostream>
using namespace std;
int top=-1;
int a[10];
void push(char x)
{
       a[++top]=x;

}
void pop()
{
    if(top==-1)
    {
        cout<<"list is empty";
    }
    else
    {
        top--;
    }
}
char peek()
{
    return a[top];
}
int main(){
	char exp[10];
	for(int i=0;i<4;i++)
	cin>>exp[i];
	char *e=exp;
	while(*e!='\0')
	{
		if(*e=='('||*e=='['||*e=='{'){
			push(*e);
			
			*e++;
		}
		else{
			char a=peek();
		if(a=='('&&*e==')'){
			cout<<"b";
			pop();
		}
		else if(a=='['&&*e==']'){
			cout<<"b";
				pop();
		}
		else if(a=='{'&&*e=='}'){
			cout<<"b";
				pop();
		}
		else
		cout<<"not balanced";
			*e++;
		}
	}
}
