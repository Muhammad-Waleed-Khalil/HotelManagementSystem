#include<iostream>
using namespace std;
main()
{
	int sr,sc;
	cout<<"Enter the Row and Coloumn size "<<endl;
	cin>>sr;
	cout<<endl;
	cin>>sc;
	float a1[sr][sc],a2[sr][sc],as[sr][sc];
	
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
			as[i][j]=a1[i][j]/a2[i][j];
		}
	}
	
	cout<<"Displaying the Divided Array "<<endl;
	for(int i=0;i<sr;i++)
	{
		for(int j=0;j<sc;j++)
		{
			cout<<as[i][j]<<"\t";
		}
		cout<<endl;
	}
}
