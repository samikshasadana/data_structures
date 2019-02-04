#include<iostream>
using namespace std;
void toh(int n,char a,char b,char c){
	if(n==1)
	cout<<a<<"->"<<c<<endl;
	else{
		toh(n-1,a,c,b);
		cout<<a<<"->"<<c<<endl;
		toh(n-1,b,a,c);
	}
}
int main(){
	int n;
	cin>>n;
	toh(n,'A','B','C');
	cout<<"tower of hanoi";
}
