#include<iostream>
using namespace std;
class Stack{
	public:
		int *arr;
		int size;
		int top;
		
	Stack(int s)
	{
		size=s;
		arr=new int[size];
		top=-1;
		}	
		
	void push(int e)
	{
		if(size-top>1)
		{
			top++;
			arr[top]=e;
		}
		else{
		
		cout<<"stack overflow ";
	}
		}	
		
	void pop(){
	if(top>=0)
	{
		top--;
		
	}
	else{
		cout<<"Already popped ";
	}
	}	
	
	void isempty(){
	if(top==-1)
	{
		cout<<"Empty ";
	}
	else {
		cout<<"Not empty ";
	}
}

	void peek(){
	cout<<"TOP VALLUE IS "<<arr[top];
	}
};
int main()
{

Stack st(5);
st.push(4133);
st.push(1243);
st.push(4121);
st.push(432);
st.peek();
}
