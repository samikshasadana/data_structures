#include<iostream>
using namespace std;
int main(){
	int n,i,k;
	cin>>n;
	int a[n];
cout<<"enter array";
for(i=0;i<n;i++){
	cin>>a[i];
}
cout<<"enter x";
cin>>k;	
int c=0;
for(i=0;i<n;i++){
	if(a[i]==k){
		c=c+1;
	}
}
if(c==0)
cout<<"c = -1";
else		
cout<<"occurence of element x is= "<<c;
return 0;
}
