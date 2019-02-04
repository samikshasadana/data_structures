#include<iostream>
using namespace std;

void merge(int a[],int start,int mid,int end){
	int n1,n2;
	n1=mid-start+1;
	n2=end-mid;
	int l1[n1],r1[n2];
	for(int i=0;i<n1;i++)
	l1[i]=a[start+i];
	
	for(int j=0;j<n2;j++){
		r1[j]=a[mid+j+1];
	}
	int i=0;
	int j=0;
	int k=start;
	while(i<n1&&j<n2){
		if(l1[i]>r1[j]){
		
				a[k]=r1[j];
			j++;
			k++;
		}
		else
		{
			a[k]=l1[i];
			i++;
			k++;
		}
		}
	
	while(i<n1){
		a[k]=l1[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=r1[j];
		j++;
		k++;
	}
}





void mergesort(int a[],int start,int end){
	if(start<end){
		int mid=start+mid/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}


int main(){
int a[100];
int n,i,l=0,temp,mini,pos,j;
 cin>>n;
for(i=0;i<n;i++){
	cin>>a[i];
}
/*for(i=0;i<n;i++){
	temp=a[i];
	j=i;
	while(j>0&&a[j-1]>temp){
		a[j]=a[j-1];
		j=j-1;
	}
	a[j]=temp;
}
for(i=0;i<n;i++){
	mini=a[i];
	pos=i;
	for(j=i;j<n;j++){
		if(a[j]<mini){
			mini=a[j];
			pos=j;
		}
	}
	temp=a[pos];
	a[pos]=a[i];
	a[i]=temp;
	
}*/
mergesort(a,l,n-1);

for(i=0;i<n;i++){
	cout<<a[i]<<endl;
}
}
