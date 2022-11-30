#include<iostream>
using namespace std;
merge (int arr[],int l,int m , int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		b[i]=arr[m+1+i];
	}
	int q=0,w=0,k=l;
	while(q<n1 && w<n2){
		
		if(a[q]<b[w])
		{
			arr[k]=a[q];
			k++;q++;
		}
		else
		{
			arr[k]=b[w];
			k++;w++;
		}
		
	}
	
	while(q<n1)
	{
			arr[k]=a[q];
			k++;q++;
	}
	while(w<n2)
	{
			arr[k]=b[w];
			k++;w++;
	}
}

mergesort(int arr[],int l,int r)
{
	int m=(l+r)/2;
	if(l<r)
	{
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
	
}
main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{cin>>arr[i];
	}
	
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{cout<<arr[i]<<" ";
	}
	
	
}

