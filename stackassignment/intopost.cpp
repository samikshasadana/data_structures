#include<iostream>
using namespace std;
class st{
	public:
	char b[20];
	int n,top;
	st(){
		top=-1;
	}
	void push(char x){
		top=top+1;
		b[top]=x;
	}
	char pop(){
		char c=b[top];
		top=top-1;
		return c;
	}
	int priority(char x){
		if(x=='(')
		return 0;
		else if(x=='+'||x=='-')
		return 1;
		else if(x=='*'||x=='/')
		return 2;
		else if(x=='^')
		return 3;
	}
	void display(){
		for(int i=top;i>=0;i--)
		cout<<b[i];
	}
	void convert(char expr[100]){
		char *e,g;
		e=expr;
		while(*e!='\0'){
			if(isalnum(*e))
			cout<<*e;
			else if(*e=='(')
			push(*e);
			else if(*e==')'){
				while(g=pop()!='(')
				cout<<g;
				
			}
			else{
				if(priority(b[top])>=priority(*e))
				cout<<pop();
				push(*e);
			}
			
			e++;
		}
		display();
	}
};
int main(){
	st s1;
	cout<<"infix to postfix"<<endl;
	char a[100];
	cout<<"enter expression"<<endl;
	cin>>a;
	s1.convert(a);
}
