#include<iostream>
using namespace std;
class queue{
	public:
	int s,f,r;
	int *arr;
	queue(int n)
	{
		s=n;
		arr=new int[s];
		f=0;r=0;}
int	qpush(int d)
	{
		if(r==s)
		{
			cout<<"QUEUE IS FULL ";
		}
		else{
			arr[r]=d;
		}
		return arr[r];
		}	
		
	int 	qpop()
		{
			if(f==r)
			{
				cout<<"queueu is emepty ";
			}
			else{
				int a=arr[f];
				arr[f]=-1;
				f++;
				if(f==r)
				{
					f=r=0;
				}
				return a;
			}
		}
		qfront()
		{
			if(f==r){
				return -1;
			}
			else {
				return arr[f];
			}
			
		}
		qempty()
		{
			if(f==r)
			{
				cout<<"EMpty ";
			}
			else{
				cout<<"not empty ";
			}
		}

};

main()
{
queue q(10);
cout<<q.qpush(12);

	
}
