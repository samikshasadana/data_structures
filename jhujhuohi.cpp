#include<iostream>
using namespace std;
int main(){
		int a[10][10],i,j,n,v,k,top=0,stk[30],visit[10],visited[10],x,y;
	cout<<"enter no of vertices";
	cin>>n;
		for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
	cout<<"enter edges";
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
	cout<<"enter source vertex";
	cin>>v;
	visited[v]=1;
	cout<<v;
	k=1;
	while(k<n){
		for(j=n;j<n;j++){
			if(a[i][j]!=0;&&visit[j]!=1&&visited[j]!=1){
				visit[j]=1;
				stk[top]=j;
				top++;
			}
		}
		v=stk[--top];
		cout<<" "<<v;
		visited[v]=1;
		visit[v]=0;
		k++;
	}
}
