#ifndef LINNKEDLIST_H
#define LINKEDLIST_H
#include <stdlib.h>

// Link (node) struct
typedef struct Node
{
	unsigned int value;
	Node* next = 0;
} Node;
void cleanLinkedList(Node **head);
unsigned int deleteNode(Node **head);
void addNode(Node**head, unsigned int value);
#endif // STACK_H