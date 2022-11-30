#include<iostream>
#include<queue>
using namespace std;
int main()
{
	deque<int>d;
	d.push_front(1);
	d.push_back(2);
	cout<<d.front();
	cout<<endl;
	cout<<d.back()<<endl;
	d.pop_back();
	cout<<d.back()<<endl;
	cout<<d.front()<<endl;
	d.pop_front();
	if(d.empty())
{
		
	cout<<"queue is emepty ";
}
else{
	cout<<"queu is not empty" ;
}
}
