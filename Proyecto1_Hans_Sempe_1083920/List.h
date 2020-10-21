#include "Node.h";
#pragma once

class Lista
{
public:
	Node* start;
	Node* end;
	int count;



	//
	Lista();
	//

	//
	//Insert Operations
	//

	void InsertAtStart(char value, char* col);
	void InsertAtEnd(char value, char* col);

	//
	//Extract operation
	//

	Node* ExtractAtStart();
	Node* ExtractAtEnd();

	Node* ExtractIndex(int indice);

	//
	//Search operations
	//

	bool isEmpty();


	void suprimirCola2(Node*& frente, Node*& fin, char value);

	~Lista() {};
};



