#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseQueueFirstKElements(int k, queue<int>& Queue)
{
//write your code here
stack<int> stack;
for(int i=0;i<k;i++)
{
	stack.push(Queue.front());
	Queue.pop();
}
while(!stack.empty())
{
	Queue.push(stack.top());
	stack.pop();
}
 for (int i = 0; i < Queue.size() - k; i++) {
        Queue.push(Queue.front());
        Queue.pop();
}
}
void Print(queue<int>& Queue)
{
	while(!Queue.empty())
	{
		cout<<Queue.front()<<" ";
		Queue.pop();
	}
}

int main()
{
	int i, n, x, k;
	cin>>n;
	cin>>k;
	queue<int> Queue;
	for(i=0;i<n;i++)
	{
	    cin>>x;
	    Queue.push(x);
	}
	reverseQueueFirstKElements(k, Queue);
	Print(Queue);
}

