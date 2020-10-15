#include "Node.h";
#pragma once

class List
{
	Node* start;
	Node* end;
	int count;

	List();
	void InsertAtStart(char value);
	void InsertAtEnd(char value);
	void InsertAtPosition(char value, int position);
	Node* ExtractAtStart();
	Node* ExtractAtEnd();
	Node* ExtractAtPosition(int position);
	Node* GetNode(char value);
	//string GetValue(int position);
	bool isEmpty();
	void suprimirCola(Node*& frente, Node *&fin,char value);
	~List() {};
};

