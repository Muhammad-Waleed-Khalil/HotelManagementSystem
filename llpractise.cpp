#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node(int d)
{	data=d;
	next=NULL;
}

};
void athead(node*&head,int d)
{
	node*temp=new node(d);
	temp->next=head;
	head=temp;
}
void attail(node*&tail,int d)
{
	node*temp=new node(d);
	tail->next=temp;
	tail=temp;
	
}
void print(node*&head)
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
{if(p==1)
	{
		athead(head,d);
		return;
	}
	
	node*temp=head;
	int cnt=1;
	while(cnt<p-1)
	{
		temp=temp->next;
		cnt++;
	}
	node*nnode=new node(d);
	nnode->next=temp->next;
	temp->next=nnode;
}
int del(node*&head,int p)
{
	node*temp=head;
	if(p==1)
	{
		node*temp=head;
		head=head->next;
		
		delete(temp);
		temp->next=NULL;
		
	}
	else{
	
	node*curr=head;
	node*prev=NULL;
	int cnt=1;
	while(cnt<p)
	{
		prev=curr;
		curr=curr->next;
		cnt++;
	}
	prev->next=curr->next;
	curr->next=NULL;
	delete(curr);
}
}
main()
{
node*t=new node(0);
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
	print(head);
	atposition(head,tail,7,99);
	print(head);
	del(head,1);
		del(head,3);
	print(head);
}
