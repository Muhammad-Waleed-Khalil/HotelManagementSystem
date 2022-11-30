#include<iostream>
using namespace std;
class queue{
	public:
		 int s,f,r,c;
		 int *arr;
		 queue()
		 {
		 s=10;
		 f=-1;
		 r=-1;
		 c=0;
		 arr=new int[s];
	}
		int add(int d)
		 {
		 	if((f==0 && r==s-1) || (r==(f-1)%(s-1)))
		 	{
		 		cout<<"Queue iss full ";
			 }
		else if(f==-1)
		{
			f=r=0;
			arr[r]=d;
			 }	 
			 
		else if(r==s-1&&f!=0)
		{
			r=0;
			arr[r]=d;
			 }	 
		else{
			r++;
			arr[r]=d;
		}	 
		 }
		 
		 int del(){
		 	if(f==-1)
		 	{
		 		cout<<"Queue is Empty ";
			 }
			 int a=arr[f];
			 arr[f]=-1;
			  if(f==r)
			 {
			 	f=r=-1;
			 }
			 else if(f==s-1)
			 {
			 	f=0;
			 }
			 else{
			 	f++;
			 }
			 return a;
		 }
		 
		int top()
		{
			if(f==-1)
			{
				cout<<"CANT show the top value coz queue is empty ";
			}
			else{c++;
		cout<<c<< ": top value is " <<arr[f]<<endl;
		
			}
		 } 
};
main()
{
	queue q;
	q.add(12);
	q.add(13);
	q.top();
	q.del();
	q.top();
	q.del();
	q.top();
}
