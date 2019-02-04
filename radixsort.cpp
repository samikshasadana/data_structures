#include<iostream>
using namespace std;
int getmax(int a[],int n)
{
	int i,max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
void countsort(int a[],int n,int exp)
{
	int output[n];
	int i,count[10]={0};
	for(i=0;i<n;i++)
	{
		count[(a[i]/exp)%10]++;
	}
	for(i=1;i<10;i++)
	{
		count[i]+=count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		output[count[(a[i]/exp)%10]-1]=a[i];
		count[(a[i]/exp)%10]--;
	}
	for(i=0;i<n;i++)
	{
		a[i]=output[i];
	}
}

void radixsort(int a[],int n)
{
	int m=getmax(a,n);
	for(int exp=1;m/exp>0;exp=exp*10)
	{
		countsort(a,n,exp);
	}
}
int main()
{
	int i,n,a[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	radixsort(a,n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
