#include<iostream>
using namespace std;
int main(){
	int n,i,j,min,pos,temp;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++){
		min=a[i];
		pos=i;
		for(j=i;j<n;j++){
			if(min>a[j]){
				min=a[j];
				pos=j;
			}
		
		}
			temp=a[i];
			a[i]=min;
			a[pos]=temp;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
