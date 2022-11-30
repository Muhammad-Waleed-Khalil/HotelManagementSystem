#include<iostream>
using namespace std;
main()
{
	int a[5]={21,32,1,435,2};
	int t;
	for(int i=0;i<5;i++)
	{
		
	
	for(int j=0;j<=5;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
for(int i=0;i<5;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
cout<<endl;
cout<<"descending order";
for(int i=5;i>0;i--)
{
	cout<<a[i]<<" ";
}
}
