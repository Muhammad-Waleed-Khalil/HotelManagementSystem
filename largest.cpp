#include<iostream>
using namespace std;
main()
{int s;
cout<<"Enter the size of array";
cin>>s;
	int a[s];
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	int save=0;
	for(int i=0;i<s;i++)
{
	if(save<a[i])
	{
		save=a[i];
		
	}
}
int s1=0;
s1=a[0];
for(int i=0;i<s;i++)
{
	if(s1>a[i])
	{
		s1=a[i];
		
	}
}
cout<<"LARGEST VALLUE IS    "<<save;
cout<<endl;		
cout<<"SMALLEST IS   "<<s1;	

}
	
	

