#include<iostream>
using namespace std;
int main()
{
	int a[10][10],n,x,y,i,j,visit[10],visited[10],v,q[30],front=0,rear=0,k;
	cout<<"enter no of vertices";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		a[i][j]=0;
	}
	cout<<"enter the edges";
	cin>>x>>y;
	if(x>n && y>n)
	{
		cout<<"not in range";
	}
	else
	{
		while(x!=-1 && y!=-1)
		{
			a[x][y]=1;
			a[y][x]=1;
			cin>>x>>y;
		}
	}
	cout<<"enter the source veertex";
	cin>>v;
	cout<<"vertices are: ";
	cout<<v<<" ";
	visited[v]=1;
	k=1;
	
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		
		cout<<endl;
	}
*/	while(k<n)
	{
		for(j=0;j<n;j++)
		{
			if(a[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			{
				visit[j]=1;
				q[rear++]=j;
			}
		}
			v=q[front++];
			cout<<v<<" ";
			k++;
			visit[v]=0;
			visited[v]=1;
		
	
	}
}
