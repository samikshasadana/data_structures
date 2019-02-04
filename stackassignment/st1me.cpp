#include<iostream>
using namespace std;
class st{
	public:
		int a[20];
		int n,top;
		st(){
			top=-1;
			cout<<"enter size";
			cin>>n;
		}
		void push(int x){
			if(top==n){
				cout<<"overflow"<<endl;
			}
			else{
				top=top+1;
				a[top]=x;
			}
		}
		void pop(){
			if(top<0){
				cout<<"underflow"<<endl;
				
			}
			else{
				top--;
			}
		}
		void display(){
			cout<<"elements of stack are: "<<endl;
			for(int i=top;i>=0;i--){
				cout<<a[i]<<"    ";
			}
		}
		int isemp(){
			if(top==-1)
			return 0;
			else
			return 1;
		}};
int main(){
	st s;
	int e,n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>e;
	s.push(e);
}
s.display();
s.pop();
s.display();
a=s.isemp();
cout<<a;}
