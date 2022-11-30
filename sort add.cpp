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
void sort(node*&head,int d)
{
	node*temp=new node(d);
	if(head==NULL)
	{
		head=temp;
	}
	else if(temp->data<head->data)
	{
		temp->next=head;
		head=temp;
	}
	else if(head->next==NULL)
	
	{
		head->next=temp;
		
	}
	else{
		node*p=head;
		bool e=false;
		while(temp->data>p->next->data)
		{
			p=p->next;
			if(p->next==NULL)
			{
				e=true;
				break;
			}
		}
		if(e)
		{
			p->next=temp;
		}
		else{
			temp->next=p->next;
			p->next=temp;
		}
	}
}
void print(node*&head)
{node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
	cout<<endl;
}
main()
{
	node*head=NULL;
	sort(head,2);
	sort(head,12);
	sort(head,8);
	sort(head,1);
	sort(head,4);
	sort(head,13);
	print(head);
}
