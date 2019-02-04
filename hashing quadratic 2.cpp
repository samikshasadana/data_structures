using namespace std;
#include<iostream>
#define max 10
class hash1
{
    int a[max];
public:
    hash1()
    {
        for(int i=0;i<max;i++)
            a[i]=0;

    }
    int create(int n,int m)
{
    int k;
    k=n%m;
    return k;

}
void linear(int k,int n,int m)
{
    int f=0,i,count=0,c=1;
    if(a[k]==0)
    {
        a[k]=n;
    }
    else
    {
        i=0;
        while(i<max)
        {
            if(a[i]!=0)
            {
                count++;
            }

            i++;
        }

    if(count==max)
                cout<<"hash table is full sir!"<<endl;

for(c=1;c<max;c++)
{

i=(k+(c*c))%m;

    if(a[i]==0)
    {
    	cout<<i<<" value of i \n";
        a[i]=n;
        f=1;
        break;

    }
}

    }
}
void disp()
{
    int i;
    for(i=0;i<max;i++)
    {
        cout<<i<<" "<<a[i]<<endl;

    }
}


};
int main()
{
    int i,n,k,m,r;
    char a;
    hash1 h;
    cin>>r;
    cin>>m;
    for(i=0;i<r;i++)
    {
        cin>>n;
        k=h.create(n,m);
        h.linear(k,n,m);

    }
    h.disp();

}
