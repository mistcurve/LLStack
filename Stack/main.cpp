#include "Stack.h"

//simple program that tests the stack, should result in i=420, j=69, k=73, l=0
int main()
{
	Stack s;
	s.push(73);
	s.push(69);
	s.push(420);
	int i = s.pop();
	int j = s.pop();
	int k = s.pop();
	int l = s.pop();
	return 0;
}