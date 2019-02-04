#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    int i,j,mini,pos,temp;
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
   
}
int main()
{
    int s,i,arr[50];
    cin>>s;
    for(i=0;i<s;i++)
        cin>>arr[i];
    selectionsort(arr,s);
     for(i=0;i<s;i++)
        cout<<arr[i];
    return 0;
}
