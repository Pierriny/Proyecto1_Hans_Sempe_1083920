#include "Node.h";
#pragma once

class List
{
	Node* start;
	Node* end;
	int count;

	Node2* start;
	Node2* end;
	int count2;

	Node3* start;
	Node3* end;
	int count3;

	Node4* start;
	Node4* end;
	int count4;

	Node5* start;
	Node5* end;
	int count5;
	



	List();


	void InsertAtStart(int value);
	void InsertAtEnd(char value);


	//
	void InsertAtPosition(char value, int position);
	//

	Node* ExtractAtStart();
	Node* ExtractAtEnd();

	//
	Node* ExtractAtPosition(int position);
	Node* GetNode(char value);
	//string GetValue(int position);

	
	bool isEmpty();
	

	void suprimirCola(Node*& frente, Node *&fin,char value);

	void InsertAtStart2(int value);
	void InsertAtEnd2(char value);
	void InsertAtPosition2(char value, int position);
	Node* ExtractAtStart2();
	Node* ExtractAtEnd2();
	Node* ExtractAtPosition2(int position);
	Node* GetNode2(char value);
	//string GetValue(int position);


	bool isEmpty2();



	void suprimirCola2(Node*& frente, Node*& fin, char value);







	~List() {};
};

class List2
{


	void InsertAtStart2(int value);
	void InsertAtEnd2(char value);
	void InsertAtPosition2(char value, int position);
	Node* ExtractAtStart2();
	Node* ExtractAtEnd2();
	Node* ExtractAtPosition2(int position);
	Node* GetNode2(char value);
	//string GetValue(int position);
	bool isEmpty2();
	void suprimirCola2(Node*& frente, Node*& fin, char value);
	~List2() {};
};

class List3
{
	
	

	void InsertAtStart3(int value);
	void InsertAtEnd3(char value);
	void InsertAtPosition3(char value, int position);
	Node* ExtractAtStart3();
	Node* ExtractAtEnd3();
	Node* ExtractAtPosition3(int position);
	Node* GetNode3(char value);
	//string GetValue(int position);
	bool isEmpty3();
	void suprimirCola3(Node*& frente, Node*& fin, char value);
	~List3() {};
};


class List4
{


	void InsertAtStart4(int value);
	void InsertAtEnd4(char value);
	void InsertAtPosition4(char value, int position);
	Node* ExtractAtStart4();
	Node* ExtractAtEnd4();
	Node* ExtractAtPosition4(int position);
	Node* GetNode4(char value);
	//string GetValue(int position);
	bool isEmpty4();
	void suprimirCola4(Node*& frente, Node*& fin, char value);
	~List4() {};
};

class List5
{


	void InsertAtStart5(int value);
	void InsertAtEnd5(char value);
	void InsertAtPosition5(char value, int position);
	Node* ExtractAtStart5();
	Node* ExtractAtEnd5();
	Node* ExtractAtPosition5(int position);
	Node* GetNode5(char value);
	//string GetValue(int position);
	bool isEmpty5();
	void suprimirCola5(Node*& frente, Node*& fin, char value);
	~List5() {};
};





