#include<iostream>
using namespace std;
main()
{
	int sr,sc;
	cout<<"Enter the Row and Coloumn size "<<endl;
	cin>>sr;
	cout<<endl;
	cin>>sc;
	int a1[sr][sc],a2[sr][sc],as[sr][sc];
	
	cout<<"Enter First Array Elemnts "<<endl;
	for(int i=0;i<sr;i++)
	{
		for(int j=0;j<sc;j++)
		{
			cin>>a1[i][j];
			cout<<endl;
		}
	}
	cout<<"Enter Second Array Elemnts "<<endl; 
	for(int i=0;i<sr;i++)
	{
		for(int j=0;j<sc;j++)
		{
			cin>>a2[i][j];
			cout<<endl;
		}
	}
	
	for(int i=0;i<sr;i++)
	{
		for(int j=0;j<sc;j++)
		{
			as[i][j]=a1[i][j]+a2[i][j];
		}
	}
	
	cout<<"Displaying the ADDition Array "<<endl;
	for(int i=0;i<sr;i++)
	{
		for(int j=0;j<sc;j++)
		{
			cout<<as[i][j]<<"\t";
		}
		cout<<endl;
}
	cout<<"Displaying the Inverse Array "<<endl;
cout<<as[3][3]<<endl;
cout<<(as[1][1]*-1)<<endl;
cout<<(as[2][2]*-1)<<endl;
cout<<as[0][0]<<endl;
}

