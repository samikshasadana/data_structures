#include<iostream>
using namespace std;
class st{
	public:
		int top;
		int a[20];
		st(){
			top=-1;
		}
		void push(int x){
			a[++top]=x;
		}
		int pop(){
			int c=a[top];
			top--;
			return c;
		}
		void eval(char expr[100]){
			char *e;
			e=expr;
			int a,b,c;
			while(*e!='\0'){
				if(*e=='+'){
				a=pop();
				b=pop();
				c=(a+b);
			//	cout<<c<<endl;
				push(c);
				}
				if(*e=='-'){
				a=pop();
				b=pop();
				c=(b-a);
			//	cout<<c<<endl;

				push(c);
				}
				if(*e=='*'){
				a=pop();
				b=pop();
				c=(a*b);
			//	cout<<c<<endl;

				push(c);
				}
				if(*e=='/'){
				a=pop();
				b=pop();
				c=(b/a);
			//	cout<<c<<endl;
				push(c);
				}
				else if(isalnum(*e))
				{
				push(*e-48);
				cout<<*e-48<<"       ";}
				*e++;
			}
			cout<<pop();
		}
};
int main(){
	st s1;
	char ex[100];
	cin>>ex;
	s1.eval(ex);
}
