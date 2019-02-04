#include<iostream>
using namespace std;
void swap(int *a,int *b)
{

	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high)
{
	int pivot;
	pivot=a[high];
	int i,j;
	i=low-1;
	for(j=low;j<=high-1;j++)
	{
		if(a[j]<=pivot)
		{
		i++;
		swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return i+1;
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
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
