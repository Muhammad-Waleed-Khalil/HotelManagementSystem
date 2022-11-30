#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	q.push(10);
	q.push(12);
	q.push(13);
	q.push(14);
	//cout<<"size is "<<q.size();
	q.pop();
	cout<<"size is "<<q.size();

cout<<endl;
	cout<<q.front();
	cout<<endl;
	cout<<q.back();
}
