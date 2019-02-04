#include<iostream>
using namespace std;
class array{
	int a[100],n,i,j;
	public:
		void get(){
			cin>>n;
			for(i=0;i<n;i++)
			cin>>a[i];

		}
		void swap(){
			for(i=0;i<n/2;i++){
				j=a[i];
				a[i]=a[n-1-i];
				a[n-1-i]=j;
			}
		}
		void print(){
			for(i=0;i<n;i++)
			cout<<a[i]<<endl;	
		}
};
int main(){
	array a;
	a.get();
	a.swap();
	a.print();
	return 0;
}
