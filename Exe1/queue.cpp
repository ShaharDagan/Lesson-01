#include "queue.h"
#include <stdlib.h>

/*
Initalize the queue for actions
Sets the elements to the beginning size 
Input:queue *q,unsigned int size
Output:none
*/
void initQueue(queue* q, unsigned int size)
{
		q->elements = new unsigned int[size];
		q->count = 0;
}
/*
The function deletes the elements of the queue(frees the memory)
Input:queue*q
Output:none 
*/
void cleanQueue(queue* q) 
{
	//<=> free(data); in c 
	delete []q->elements;
	delete q;

}
/*
The funtion add the queue(q) at the end the newValue 
Input:queue*q,unsigned int newValue
Output: none
*/
void enqueue(queue* q, unsigned int newValue) 
{
	//realloc memory for the new value
	q->elements = (unsigned int*)realloc(q->elements, sizeof(unsigned int)*(q->count + 1));
	q->elements[q->count] = newValue;//set the last index to the value
	q->count++;//increment counter

}
/*
The function removes the first element from the queue
Input:queue* q
Output:return the element we are removing 
*/
int dequeue(queue* q) 
{
	int i = 1;
	//gets the first element in the queue
	unsigned int a = q->elements[0];
	//move the other elements one cell backwards
	while (i <= q->count) 
	{
		q->elements[i - 1] = q->elements[i];
		i++;
	}

	q->count--;
	q->elements = (unsigned int*)realloc(q->elements, sizeof(unsigned int)*(q->count));
	return a;
}