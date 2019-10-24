#include<stdio.h> 
#include<stdlib.h> 

/* Link list node */
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

/* Given a reference to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = 
			(struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

/* Counts no. of nodes in linked list */
int getCount(struct Node* head) 
{ 
	int count = 0; 
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
	for (int i=0; i<n-1 && curr != NULL; i++) 
	curr = curr->next; 
	return curr->data; 
} 

void printList(Node *head) 
{ 
	// Count nodes 
	int n = getCount(head); 

	for (int i=n; i>=1; i--) 
		printf("%d ", getNth(head, i)); 
} 

int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 

	/* Use push() to construct below list 
	1->2->3->4->5 */
	push(&head, 5); 
	push(&head, 4); 
	push(&head, 3); 
	push(&head, 2); 
	push(&head, 1); 

	printList(head); 

	return 0; 
} 
