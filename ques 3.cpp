#include<iostream>
using namespace std;
int main(){
	int n,i,k,c;
	cin>>n;
	int a[n];
	int b[n];
cout<<"enter array";
for(i=0;i<n;i++){
	cin>>a[i];
}
c=0;
for(i=0;i<n;i++){
	
	for(k=i;k<n;k++){
		if(a[k]<0)
		{
			b[i]=a[k];
			a[k]=0;
			c=c+1;
			break;
		}
	}
	
}
for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<c<<endl;
for(i=0;i<n;i++){
	cout<<b[i]<<" ";
}
cout<<endl;
for(i=c;i<n;i++){
	for(k=0;k<n;k++){
		if(a[k]>=1)
		{
			b[i]=a[k];
			a[k]=0;
			break;
		}
	}
	
}

for(i=0;i<n;i++)
cout<<b[i]<<" ";
cout<<endl;

return 0;
}
