#include<iostream>
using namespace std;
int top=-1;
char a[100];
void push(int x){
	a[++top]=x;
}
char pop(){
	return a[top--];
}
int pri(char e){
	if(e=='+'||e=='-')
	return 1;
	else if(e=='*'||e=='/')
	return 2;
}
void eval(char exp[]){
	char * e,g;
	e=exp;
	while(*e!='\0')
	{
		if(isalnum(*e))
		cout<<*e;
		else if(*e=='(')
		push(*e);
		else if(*e==')'){
			while(g=pop()!='(')
{cout<<g;
}
		   
		}
		else
		{
		if(pri(a[top])>=pri(*e))
		{g=pop();
		//cout<<pri(a[top])<<pri(*e)<<endl;
		cout<<g;
		}
		push(*e);
		}
	*e++;
	}
	while(top!=-1){
		cout<<pop();
	}
}
int main(){
	char s[100];
	cin>>s;
	eval(s);
}
