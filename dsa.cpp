#include <iostream>

using namespace std;
struct node {
   int data;
   node * next;
};
void addsort(struct LL ** head, int X) {
   node * temp = * head;
   LL * t = new LL;
   //if list is empty
   if ( * head == NULL) {
      * head = new LL;
      ( * head) -> data = X;
      ( * head) -> next = NULL;
   } else {
      if (X < temp -> data) //start node
      {
         t = new LL;
         t -> data = X;
         t -> next = * head;
         * head = t;
      } else {
         while (temp -> next != NULL and!(X < temp -> next -> data && X >= temp -> data)) //as it is sorted so X must lie between the consecutive values or else at end
            temp = temp -> next;

         if (temp -> next == NULL) //X will go to end
         {
            temp -> next = new LL;
            temp = temp -> next;
            temp -> data = X;
            temp -> next = NULL;
         } else //X is inserted in between some nodes in list
         {
            t = new LL;
            t -> data = X;
            t -> next = temp -> next; //make the new node's next as the next of current node because the 't' node will lie between consecutive nodes
            temp -> next = t;
         }
      }
   }
}

void print(struct LL ** head) {
   struct LL * temp = * head;
   while (temp != NULL) {
      if (temp -> next != NULL)
         cout << temp -> data << " ->";
      else
         cout << temp -> data;

      temp = temp -> next; //move to next node
   }
   cout << endl;
}

int main() {

   struct LL * head = NULL; //initial list has no elements
   int a;
   cout << "Do You Want To Enter New Node (Press 1 ) " << endl;
   cout << "--------------------------------------------- " << endl;
   cin >> a;
   if (a == 1) {
      int b;
      q:
         cout << "Enter the Data of Node ";
      cin >> b;
      addsort( & head, b);
      cout << "\nLink List is  :-\n";
      print( & head);
      cout << "--------------------------------------------- " << endl;
      cout << "Want To Enter More Nodes Press y ";
      char c;
      cin >> c;
      if (c == 'y') {
         goto q;
      }
   }

   return 0;
}
