#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int end){
	int n1,n2,i,j,k;
	n1=mid-start+1;
	n2=end-mid;
	int l[n1],r[n2];
	for(i=0;i<n1;i++){
		l[i]=a[start+i];
		
	}
	for(i=0;i<n2;i++){
		r[i]=a[mid+i+1];
		
	}
	i=j=0;k=start;
	while(i<n1&&j<n2){
		if(l[i]<=r[j]){
			a[k]=l[i];
			i++;
		}
		else{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<n1){
	a[k]=l[i];
	i++;
	k++;
	}
	while(j<n2){
	a[k]=r[j];
	j++;
	k++;
	}
}
void ms(int a[],int s,int e){
	if(s<e){
		int m=(s+e)/2;
		ms(a,s,m);
		ms(a,m+1,e);
		merge(a,s,m,e);
	}
}
int main(){
	int n,i,pos=0;
	int a[10];
	cin>>n;
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	ms(a,pos,n-1);
/*	for(i=0;i<n;i++){
		/*j=i;
		temp=a[i];
		while(j>0&&temp<a[j-1]){
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;
		pos=i;
		mini=a[i];
		for (j=i;j<n;j++){
			if(mini>a[j]){
				pos=j;
				mini=a[j];
			}
		}
		temp=a[i];
		a[i]=mini;
		a[pos]=temp;
	}*/
	for (i=0;i<n;i++){
		cout<<a[i];
	}
}
