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
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 

int main() { 
	
	cout << "Enter the number you want to add to the list, enter \"-1\" when you've finished:";

/* Loop to let user add nodes to the list */
	while (new_data != -1) {
		cin >> new_data;
		insert(new_data);
	} 

   cout << "The linked list is: ";
   display(); 
   return 0; 
} 
