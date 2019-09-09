#pragma once

class Stack
{
	class node
	{
	public:
		node* next;
		int value;
	};




	node* end;

public:
	void push(int i);
	int pop();
	Stack()
	{
		end = 0;
	}

};