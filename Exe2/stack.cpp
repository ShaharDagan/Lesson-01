#include "stack.h"
/*
add element to the stack at the end
Input:stack*s
Output: none
*/
void push(stack* s, unsigned int element) 
{
	addNode(&s->nodes, element);
}
/*
removes the last element in the stack 
Input:stack*s
Output: return the value of the last element
*/
int pop(stack* s) 
{
	if (s->nodes) {
		
		int a = deleteNode(&s->nodes);
		return a;
	}
	else 
	{
		return -1;
	}
}
/*
Initalize the stack 
Input:stack *s
Output:none
*/
void initStack(stack* s)
{
	s->nodes = NULL;
}
/*
clean the stack and frees the memory
Input:stack *s
Output:None
*/
void cleanStack(stack* s) 
{
	cleanLinkedList(&s->nodes);
	delete s;
}