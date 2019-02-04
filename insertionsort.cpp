#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i;
        while(j>0 && temp<a[j-1])
        {
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
        cout<<a[i];
}
