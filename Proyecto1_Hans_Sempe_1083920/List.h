#include "Node.h";
#pragma once

class List
{
public:
	Node* start;
	Node* end;
	int count;

	Node2* start2;
	Node2* end2;
	int count2;

	Node3* start3;
	Node3* end3;
	int count3;

	Node4* start4;
	Node4* end4;
	int count4;

	Node5* start5;
	Node5* end5;
	int count5;
	
	Node6* start6;
	Node6* end6;
	int count6;

	Node7* start7;
	Node7* end7;
	int count7;

	Node8* start8;
	Node8* end8;
	int count8;

	//
	List();
	//
	
	//
	//Insert Operations
	//

	void InsertAtStart(int value);
	void InsertAtEnd(int value);

	void InsertAtStart2(int value);
	void InsertAtEnd2(int value);

	void InsertAtStart3(int value);
	void InsertAtEnd3(int value);

	void InsertAtStart4(int value);
	void InsertAtEnd4(int value);

	void InsertAtStart5(int value);
	void InsertAtEnd5(int value);

	void InsertAtStart6(int value);
	void InsertAtEnd6(int value);

	void InsertAtStart7(int value);
	void InsertAtEnd7(int value);

	void InsertAtStart8(int value);
	void InsertAtEnd8(int value);

	//
	//Extract operation
	//

	Node* ExtractAtStart();
	Node* ExtractAtEnd();

	Node2* ExtractAtStart2();
	Node2* ExtractAtEnd2();

	Node3* ExtractAtStart3();
	Node3* ExtractAtEnd3();

	Node4* ExtractAtStart4();
	Node4* ExtractAtEnd4();

	Node5* ExtractAtStart5();
	Node5* ExtractAtEnd5();

	Node6* ExtractAtStart6();
	Node6* ExtractAtEnd6();

	Node7* ExtractAtStart7();
	Node7* ExtractAtEnd7();

	Node8* ExtractAtStart8();
	Node8* ExtractAtEnd8();

	//
	//Search operations
	//

	bool isEmpty();
	bool isEmpty2();
	bool isEmpty3();
	bool isEmpty4();
	bool isEmpty5();
	bool isEmpty6();
	bool isEmpty7();
	bool isEmpty8();

	void suprimirCola2(Node*& frente, Node*& fin, char value);

	~List() {};
};



