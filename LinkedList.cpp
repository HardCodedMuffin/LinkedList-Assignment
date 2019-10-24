#include <iostream>
#include <string>
using namespace std;

int new_data;

/* Link list node */
struct Node { 
   int data; 
   struct Node *next; 
}; 

/* Start with the empty list */
struct Node* head = NULL;   

/* Push a new node on the front
of the list. */
void insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 

/* Loop that prints out each node */
void display() { 
   struct Node* ptr;
   ptr = head;
   cout << endl;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
   cout << endl;
} 

int main() { 
  int option;
  do {
	  cout << endl << "---------------Main Menu-------------------" << endl;
	  cout << "1. Create List" << endl;
	  cout << "2. Print List" << endl;
	  cout << "3. Exit" << endl;
	  cin >> option;
	  
	  switch (option) {
		  case 1:
			  /* Loop to let user add nodes to the list */
			  while (new_data != -1) {
				  cin >> new_data;
				  insert(new_data);
			  } 
			  break;
		  case 2:
			  cout << endl << "All nodes off the Linked List:" << endl;
			  display();
			  break;
	  }
  } while (option != 3);

return 0; 
} 
