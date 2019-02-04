#include<iostream>
using namespace std;
void swap(int *a,int *b)
{

	int temp=*a;
	*a=*b;
	*b=temp;
}
int part(int a[],int l,int h){
	int i,j;
	i=l-1;
	int pivot=a[h];
	for(j=l;j<h;j++){
		if(a[j]<pivot){
			i++;
			swap(a[j],a[i]);
		}}
		swap(a[i+1],a[h]);
		return i+1;
	
}
void quicksort(int a[],int low,int high){
	if(low<high){
		int pi=part(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
int main()
{
	int a[20],n;
	cout<<"enter no of elments";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int low=0;
	int high=n;
	quicksort(a,low,high-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
