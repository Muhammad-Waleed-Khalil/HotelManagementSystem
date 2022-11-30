#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node*prev;
		node(int d)
		{
			data=d;
			next=NULL;
			prev=NULL;
		}
		
};
void athead(node*&head,int d)
{
	if(head==NULL)
	{
		node*temp=new node(d);
		head=temp;
		
	}
	else{
		node*temp=new node(d);
		head->prev=temp;
		temp->next=head;
		
		head=temp;
	}
}
void print(node*&head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ->";
		temp =temp->next;
	}
	cout<<" NULL"<<endl;
}
void attail(node*&tail,int d)
{if(tail==NULL)
{
	node*temp=new node(d);
	temp=tail;
}
else{

	node*temp=new node(d);
	temp->prev=tail;
	tail->next=temp;
	
	tail=temp;
}}
main()
{
	node*head=NULL;
	node*tail=NULL;
	athead(head,12);
	athead(head,12312);
	athead(head,1232);
	attail(tail,2);
	print(head);
}

