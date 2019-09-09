#include "Stack.h"

//pushes 1 int to the "end" of the stack
void Stack::push(int i)
{
	node* temp = new node();
	temp->value = i;
	temp->next = end;
	end = temp;
}

//pops one item off of the stack, returning 0 if no item is on the stack.
int Stack::pop()
{
	if (end != 0)
	{
		int retVal = end->value;
		end = end->next;
		return retVal;
	}
	return 0;
}
