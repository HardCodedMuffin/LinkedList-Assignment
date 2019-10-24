#include <iostream>
#include <string>
using namespace std;

int new_data;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
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


int getCount(struct Node* head)
{
	int count = 0; // Initialize count 
	struct Node* current = head; // Initialize current 
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}

/* Takes head pointer of the linked list and index
	as arguments and return data at index*/
int getNth(struct Node* head, int n)
{
	struct Node* curr = head;
	for (int i = 0; i < n - 1 && curr != NULL; i++)
		curr = curr->next;
	return curr->data;
}

/* Loop that prints out each node */
void display() {
	struct Node* ptr;
	ptr = head;
	
	int n = getCount(head); // Count nodes 

	cout << endl;
	for (int i = n; i >= 2; i--)
		cout << getNth(head, i) << " ";
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
			getCount(head);
			break;
		case 2:
			cout << endl << "All nodes off the Linked List:" << endl;
			display();
			break;
		}
	} while (option != 3);

	return 0;
}
