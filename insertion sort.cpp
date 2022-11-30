#include<iostream>
using namespace std;
insertion(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int c=arr[i];
			int j=i-1;
			while(arr[j]>c && j>=0)
			{
					 arr[j+1]=arr[j];
					 j--;
			}
			arr[j+1]=c;
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
insertion(arr,n);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

}

