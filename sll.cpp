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
void athead(node*&head,int d)
{
	if(head==NULL)
	{
		node*temp=new node(d);
		head=temp;
	}else{
	
	node*temp=new node(d);
	temp->next=head;
	head=temp;
}
}

void attail(node*&tail,int d)
{
	node*temp=new node(d);
	tail->next=temp;
	temp=tail;
}
void print(node*&head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void deld(node*&head,int f)
{
	
	if(head->data==f)
	{
		node*temp=head;	
		head=head->next;
		
		temp->next=NULL;
delete(temp);
	}
	else{
	
	node*curr=head;
	node*prev=NULL;
	while(curr->data!=f)
	{
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
	
	curr->next=NULL;
delete(curr);

}}
void delp(node*&head,int p)
{
	
	if(p==1)
	{
		node*temp=head;	
		head=head->next;
		
		temp->next=NULL;
delete(temp);
	}
	else{
	int cnt=1;
	node*curr=head;
	node*prev=NULL;
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
{node*t=new node(1);
	node*head=t;
	node*tail=t;
	athead(head,14);
	athead(head,13);
	athead(head,12);
	athead(head,11);
	attail(tail,1531);
	print(head);
	deld(head,13);
	delp(head,3);
	print(head);
}

