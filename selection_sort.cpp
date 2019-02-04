#include<iostream>
using namespace std;
int main(){
	int m=1000;
	int arr[100];
	int n,i,j,pos,temp;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(j=0;j<n;j++){
	
	for(i=j;i<n;i++){
		if(arr[i]<m){
			m=arr[i];
			pos=i;
		}
	}
	temp=arr[pos];
	arr[pos]=arr[j];
	arr[j]=temp;
	m=1000;
}
for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
