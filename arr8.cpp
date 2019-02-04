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
	void sort(){
		for(i=0;i<n;i++){
			for(j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
				
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;}
			}
		}
	}
		void print(){
			for(i=0;i<n;i++)
			cout<<a[i]<<endl;	
			cout<<"min element="<<a[0]<<endl;
			cout<<"max element="<<a[n-1]<<endl;
			
		}
};
int main(){
	array a;
	a.get();
	a.sort();
	a.print();
	return 0;
}
