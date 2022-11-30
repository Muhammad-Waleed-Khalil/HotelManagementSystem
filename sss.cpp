#include<iostream>
using namespace std;
int sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minindex=i;
		
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}	
		}
		swap(arr[minindex],arr[i]);
	}
	cout<<"  sorting-------  "<<endl;
		for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
		cout<<endl<<endl;
}

int main(){
	int array1[7]={10,1,7,4,8,2,11};
	 sort(array1,7);
	
}
