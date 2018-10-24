#include "utils.h"
/*
Reverse the array 
Input:int *nums,unsigned int size
Output: none
*/
void reverse(int* nums, unsigned int size) 
{
	//create stack
	stack *s = new stack;
	initStack(s);
	int i=0;
	int first = nums[0];
	//gets the elemnts and add them in the oppiste direction
	for (i = 0; i < size; i++) 
	{
		push(s,nums[i]);
	}
	printf("\n");
	int j = 0;
	//get them back to the array 
	for (i = size-1 ; i >= 0; i--) 
	{
		nums[j] = pop(s);
		j++;
	}
	
	nums[size - 1] = first;
}
/*
reverse the 10 numbers array
Input:none
Output:return the revered array 
*/
int* reverse10() 
{
	int i = 0;
	int * a = new int[10];
	for (i = 0; i < 10; i++) 
	{
		//get the numbers 
		cin >> a[i];
	}
	reverse(a, 10);
	return a;

}

