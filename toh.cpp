#include<iostream>
using namespace std;
void toh (int n,char a,char b,char c){
		//cout<<a<<"->"<<c<<endl;
		if(n==1){
		cout<<a<<"->"<<c<<endl;
	}
	
		toh(n-1,'a','c','b');
		toh(n-1,'b','a','c');
	}		//cout<<a<<"->"<<c<<endl;
	
int main(){
int n;
cin>>n;
toh(n,'a','b','c');
return 0;}

