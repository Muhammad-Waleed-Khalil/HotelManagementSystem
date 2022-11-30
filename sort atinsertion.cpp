// Q4

#include<iostream>
using namespace std;

void add(int);
void display();

class node{
    public:
        int data;
        node *next = NULL;
};

node* head = NULL;
node* temp = NULL;

main(){


    display();

    while(true){
        int choice;
        cout<<"\n1) ADD\n";
        cout<<"2) Display List\n";
        cin>>choice;
        if(choice == 1){
            int data;
            cout<<"Enter Number : ";
            cin>>data;
            add(data);
        }else{
            display();
        }
    }
}

void add(int data){
    temp = new node;
    temp->data = data;
    if(head == NULL){
        head = temp;
    }else if(temp->data < head->data){
        temp->next = head;
        head = temp;
    }else if(head->next == NULL){
        head->next = temp;
    }else{
        node* position = head;
        bool end = false;
        while(temp->data > position->next->data ){
            position = position->next;
            if(position->next == NULL){
                end = true;
                break;
            }
        }
        if(end){
            position->next = temp;
        }else{
            temp->next = position->next;
            position->next = temp;
        }
    }
}

void display(){
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
