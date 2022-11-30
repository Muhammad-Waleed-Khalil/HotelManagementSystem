#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*prev;
		node*next;
		node(int d)
		{
			data=d;
			prev=NULL;
			prev=NULL;
		}
		
};

void athead(node*&head,int d){
	if(head==NULL)
{

	node*temp=new node(d);
	head=temp;
	
}
else{
	node*temp=new node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
	
}
}

void attail(node*&tail,int d)
{
	node*temp=new node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}
print(node*&head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void atposition(node*&head,node*&tail,int p,int d)
{
	if(p==1)
	{
		athead(head,d);
		return;
		}
		node*temp=head;
		int c=1;
		while(c<p-1)
		{
			temp=temp->next;
			c++;
		}
		if(temp->next==NULL)
		{
			attail(tail,d);
		}
		node*nnode=new node(d);
		nnode->next=temp->next;
		temp->next=nnode;
		nnode->next->prev=nnode;
		nnode->prev=temp;	
}
int del(node*&head,int p)
{
	if(p==1)
	{
		node*temp=head;
		head=head->next;
		temp->next=NULL;
		delete(temp);		
	}
	else{
	
	node*f=head;
	node*b=NULL;
	int c=1;
	while(c<p)
	{
		b=f;
		f=f->next;
		c++;
	}
	b->next=f->next;
	f->next->prev=b;
	f->next=NULL;
	delete(f);
}
}
main()
{ node*t=new node(0);
node*head=t;
node*tail=t;
	athead(head,12);
	athead(head,11);
	athead(head,13);
	athead(head,14);
	
		attail(tail,11);
	attail(tail,10);
	attail(tail,9);
	attail(tail,8);
	atposition(head,tail,4,98);
	print(head);
	del(head,1);
	del(head,1);
	del(head,1);
	print(head);
}

