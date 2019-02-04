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
for(i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
				
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;}
			}
		}
cout<<"enter k";
cin>>k;	
cout<<"kth smallest element is= "<<a[k-1];
return 0;
}
