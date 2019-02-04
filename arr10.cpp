#include<iostream>
using namespace std;
class matrix{
int i,j,k,l,m,n,e;
int arr[100][100];
public:
	void get(){
		cin>>m>>n;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cin>>arr[i][j];
				
			}
		}
	}
	void replace(){
	cout<<"enter position";
	cin>>k>>l;
	cout<<"enter element";
	cin>>e;
	arr[k][l]=e;
}
void print(){
	cout<<"new matrix";
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<arr[i][j]<<" ";
				
			}
			cout<<endl;
		}
}
};
int main(){
	matrix m;
	m.get();
	m.replace();
	m.print();
}
