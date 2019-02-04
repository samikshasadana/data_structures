#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n,i,j,k,temp;
	cin>>n;
		for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		temp=a[i];
		j=i;
		while(j<0 && a[j-1]>temp){
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;
		
	}
	
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
