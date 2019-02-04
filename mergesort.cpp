#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int end)
{
    int i,j,k,n1,n2;
    n1=mid-start+1;
    n2=end-mid;
    int l[n1],r[n2];
    for(i=0;i<n1;i++)
            l[i]=a[start+i];
    for(j=0;j<n2;j++)
        r[j]=a[mid+j+1];
        i=0;j=0;k=start;
    while(i<n1&&j<n2)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=r[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int start,int end)
{
    if(start<end)
    {
        int m=(start+end)/2;
        merge_sort(a,start,m);
        merge_sort(a,m+1,end);
        merge(a,start,m,end);
    }
}

int main()
{
    int arr[20],s=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,s,n-1);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
