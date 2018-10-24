#include "linkedList.h"
/*
free the space of the linked list 
Input:Node **head
Output:none
*/
void cleanLinkedList(Node **head) 
{
	Node *curr;
	
	while ((curr= *head) != NULL) 
	{ // set curr to head, stop if list empty.
		*head = (*head)->next;          // advance head to next element.
		free(curr);                // delete saved pointer.
	}
}
/*
Delete the first node in the list 
Input:Node **head
Output:none
*/
unsigned int deleteNode(Node **head) 
{
	//check if the list doesnt contain anything
	if ((*head)->next == NULL) 
	{
		delete head;
		return 0;
	}
	else
	{
		Node *prev = new Node;
		Node* curr = *head;
		while (curr->next)
		{
			prev = curr;
			curr = curr->next;
		}
		unsigned int value = curr->value;
		prev->next = NULL;
		delete curr;
		return value;
	}

}
/*
add a node to the end of the list 
Input:Node** head, unsigned int value
Output:none
*/
void addNode(Node**head, unsigned int value) 
{
	if ((*head)== NULL) 
	{
		(*head) = new Node;

		(*head)->value = value;
	}
	else 
	{
		Node* curr = *head;
		Node *newNode = new Node;
		while (curr->next)
		{
			curr = curr->next;
		}
		newNode->value = value;
		curr->next = newNode;
		newNode->next = NULL;

	}
}