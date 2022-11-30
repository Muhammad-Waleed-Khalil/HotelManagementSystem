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
void insertAtHead(node* &head, int d) {

    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(node* &tail, int d) {
    node* temp = new node(d);
    tail -> next = temp;
    tail  = temp;
}
void insertAtPosition(node* &tail, node* & head,  int d,int position) {


    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print(node* &head){
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"    ";
		temp=temp->next;
	}
	
}
node*reverse(node* &head)
{node*next;
node*curr=head;
node*prev=NULL;
while(curr!=NULL)
{
	next=curr->next;
	curr->next=prev;
	prev=curr;
	curr=next;
}
return prev;
}
int main()
{node*n=new node(10);
	node*head=n;
	node*tail=n;
	insertAtPosition(tail,head,12,1);
	insertAtPosition(tail,head,121,2);
	insertAtPosition(tail,head,122,4);
	insertAtPosition(tail,head,123,5);
	insertAtPosition(tail,head,124,6);
	print(head);
	node*nhead=reverse(head);
	cout<<"\n\n\n\n";
	cout<<"Reversing  link list \n\n\n"<<endl;
	print(nhead);
}