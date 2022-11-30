#include<iostream>
using namespace std;

int bubble(int arr[],int n)
{
	int c=1;
	while(c<n-1)
{
	for(int i=0;i<n-c;i++)
	{
		if(arr[i+1]<arr[i])
		{
			int t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1	]=t;
		}
	}
	c++;
}

}
main()
{
int n ;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
bubble(arr,n);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

}

