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
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
