#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};
void enque(node* &rear, int d) {
    node* temp = new node(d);
	if(!temp)
    {
    	cout<<"heap memory is full \n ";
	}
	
    rear -> next = temp;
    rear  = temp;
}
void del(node* &front)

{
node*temp=front;
front=front->next;
cout<<" The node With data "<<temp->data<<  " is deleted " <<endl;
//temp->next=NULL;
delete(temp);	
if(front==NULL )
{
	cout<<"ALL NODES ARE DELETED  \n";
}
}
void print(node* &front){
	node*temp=front;
	while(temp!=NULL)
	{
		cout<<endl<<temp->data<<"    ";
		temp=temp->next;
	}
	
}
main()
{
node*d=new node(10);
	node*rear=d;
	node*front=d;
	
enque(rear,1421);	
enque(rear,114234);
enque(rear,1123);
enque(rear,114);
enque(rear,113);
cout<<"\n\n display queue \n\n";
print(front);
cout<<"\n\n\n after dleting display queue \n\n";
del(front);
del(front);
del(front);

print(front);
}