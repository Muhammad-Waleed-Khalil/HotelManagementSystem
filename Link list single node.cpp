#include<iostream>
#include<map>
using namespace std;
class Node {
 public:
    int data;
    Node* next;
 //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}
void del(Node* &head,Node* &tail,int e)
{
	Node*curr;
	while(curr->next->data==e)
	{
		Node*temp;
		curr=temp;
		temp=tail;
		curr=curr->next;
		tail->next=NULL;
		delete curr;
	}
}
void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main() {
    
    //created a new node
    Node* node1 = new Node(10);
   // cout << node1 -> data << endl;
   //cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    print(head);
int a;
cout<<"Press 1 for aDding new  Node : "<<endl;

cin>>a;
if(a==1)
{a:
cout<<"Enter 1 the Data of new node at head "<<endl;
cout<<"Enter 2 the Data of new node at tail "<<endl;
cout<<"Enter 3 the Data of new node at position "<<endl;
int b;

cin>>b;
if(b==1)
    {int a;
    cout<<"Enter the data "<<endl;
    cin>>a;
	insertAtHead(head, a);

    print(head);
    cout<<"Wanna Add more the press 1 "<<endl;
    int c;
	cin>>c;
    if(c==1)
    {
    	goto a;
	}
	else{
		cout<<"You entered wrong entry "<<endl;
	}
}
if(b==2)
{int a;
    cout<<"Enter the data "<<endl;
    cin>>a;
	  insertAtTail(tail, a);

    print(head);
    cout<<"Wanna Add more the press 1 "<<endl;
    int c;
	cin>>c;
    if(c==1)
    {
    	goto a;
	}
	else{
		cout<<"You entered wrong entry "<<endl;
	}
}
if(b==3)

{
	int d;
	cout<<"Enter the positon whrere uwant to add "<<endl;
	cin>>d;
	
int a;
    cout<<"Enter the data "<<endl;
    cin>>a;
 
 insertAtPosition(head,tail,d ,b);
    print(head);
    cout<<"Wanna Add more the press 1 2 to dlete "<<endl;
    int c;
	cin>>c;
    if(c==1)
    {
    	goto a;
	}
	else{
		cout<<"You entered wrong entry "<<endl;
	}
	if(c==2)
	{int b;
		cout<<"number to deldete ";
		cin>>b;
		del(head,tail,b);
	}
}
}
}
