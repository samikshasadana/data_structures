#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int n,i,j,x,y,k;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
			
		}
	}
				cin>>x>>y;
			while(x!=-1||y!=-1){
			
				a[x][y]=a[y][x]=1;
				cin>>x>>y;
			}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
