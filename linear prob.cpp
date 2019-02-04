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
		{
			a[i]=0;
		}
	}
	int create(int n,int m)
	{
		int k;
		k=n%m;
		return k;
	}
	void linear(int k,int n)
	{
		int f=0,i,count=0;
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
			cout<<"hash table is fulled";

		for(i=k+1;i<max;i++)
		{
			if(a[i]==0)
			{
				a[i]=n;
				f=1;
				break;
			}
		}
		for(i=0;i<k&&f==0;i++)
		{
			if(a[i]==0)
    		{
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
	hash1 h1;
	int n,i,k,m,p;
	cin>>p;
	cin>>m;
	for(i=0;i<p;i++)
	{
		cin>>n;
		k=h1.create(n,m);
		h1.linear(k,n);
	}
	h1.disp();
}
