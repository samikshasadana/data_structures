#include<iostream>
using namespace std;
int top=-1;
int a[100];
void push(int x){
	a[++top]=x;
}
int pop(){
	int c=a[top];
	top--;
	return c;
}
void eval(char exp[]){
	char *e;
	int a,b,c;
	e=exp;
	while(*e!='\0'){
		if(*e=='+'){
		a=pop();
		b=pop();
		c=a+b;
		//cout<<c;
			//	cout<<c<<" "<<a<<" "<<b<<endl;

		push(c);	
		}
			if(*e=='*'){
		a=pop();
		b=pop();
		c=a*b;
		//cout<<c<<" "<<a<<" "<<b<<endl;
		push(c);	
		}
		else if(isalnum(*e)) {
			//cout<<*e-48<<endl;
			push(*e-48);
		}
		e++;
	}
	cout<<pop();
}

int main(){
	char s[100];
	cin>>s;
	eval(s);
}
