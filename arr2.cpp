#include<iostream>
using namespace std;
class array{
	int a[100],n,i,j,b[20];
	public:
		void get(){
			cout<<"enter size";
			cin>>n;
			cout<<"enter burst time";
			for(i=0;i<n;i++)
			cin>>a[i];

		}
		void fcfs(){
			int sum=0;
		for(i=0;i<n;i++){
			b[i]=sum;
			sum=sum+a[i];
		}
		}
		void print(){
			int avg=0;
			for(i=0;i<n;i++)
			avg=avg+b[i];	
			avg=avg/n;
			cout<<avg;
		}
};
int main(){
	array a;
	a.get();
	a.fcfs();
	a.print();
	return 0;
}
