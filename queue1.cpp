#include<iostream>
using namespace std;
int main(){
	char a[10];
	int n;
	char e;
	int f=0;
	int r=0;
	cout<<"enter size of queue"<<endl;
	cin>>n;
	if(r==n)
		{
			cout<<"overflow";
			//break;
		}
	for(int i=0;i<n;i++){
		cin>>e;
		
		if(f==0){
			f=1;
			r=1;
		}
		else
		{
			r=r+1;
		}
		a[r]=e;
	}
	if(f==0)
	cout<<"underflow";
	int i=f;
	while(i<=r){
		cout<<a[i]<<"    ";
		i++;
	}
	for(int j=0;j<n;j++){
	cout<<endl;
	if(f==0){
		cout<<"underflow";
	}
	int v=a[f];
	cout<<v<<endl;
	f=f+1;
	if(f==0)
	cout<<"underflow";
	i=f;
	while(i<=r){
		cout<<a[i]<<"    ";
		i++;
	}
	
}
	
	return 0;
}
