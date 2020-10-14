#include "Node.h";
#pragma once

class List
{
	Node* start;
	Node* end;
	int count;

	List();
	void InsertAtStart(int value);
	void InsertAtEnd(int value);
	void InsertAtPosition(int value, int position);
	Node* ExtractAtStart();
	Node* ExtractAtEnd();
	Node* ExtractAtPosition(int position);
	Node* GetNode(int value);
	//string GetValue(int position);
	bool isEmpty();
	void suprimirCola(Node*& frente, Node *&fin,int value);
	~List() {};
};

