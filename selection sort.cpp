#include<iostream>
using namespace std;
int main()
{
    int i,j,pos,temp,n,mini;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        mini=a[i];
        pos=i;
        for(j=i;j<n;j++)
        {
            if(mini>a[j])
            {
                mini=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    for(i=0;i<n;i++)
        cout<<a[i];
}
