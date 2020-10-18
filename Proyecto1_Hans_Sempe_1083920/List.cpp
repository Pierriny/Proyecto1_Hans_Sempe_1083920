#include "List.h"

List::List() {
	start = nullptr;
	end = nullptr;
	count == 0;

	start2 = nullptr;
	end2 = nullptr;
	count2 == 0;

	start3 = nullptr;
	end3 = nullptr;
	count3 == 0;

	start4 = nullptr;
	end4 = nullptr;
	count4 == 0;

	start5 = nullptr;
	end5 = nullptr;
	count5 == 0;

	start6 = nullptr;
	end6 = nullptr;
	count6 == 0;

	start7 = nullptr;
	end7 = nullptr;
	count7 == 0;

	start8 = nullptr;
	end8 = nullptr;
	count8 == 0;

};

//Insert Operations

void List::InsertAtStart(int value) {

	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty())//Revisa si esta vacio Grupo_1
	{
		start = new_node;
		end = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next = start;
		start = new_node;
	}
	count++;
}

void List::InsertAtEnd(int value) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		end->next = new_node;
		end = new_node;
	}
	count++;
}

void List::InsertAtStart2(int value) {
	Node2* new_node = new Node2();
	new_node->value2 = value;

	if (isEmpty2())//Revisa si esta vacio Grupo_1
	{
		start2 = new_node;
		end2 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next2 = start2;
		start2 = new_node;
	}
	count2++;
}

void List::InsertAtEnd2(int value) {
	Node2* new_node = new Node2();
	new_node->value2 = value;

	if (isEmpty2()) { //The list is empty
		start2 = new_node;
		end2 = new_node;
	}
	else { //The list is not empty
		end2->next2 = new_node;
		end2 = new_node;
	}
	count2++;
}

void List::InsertAtStart3(int value) {
	Node3* new_node = new Node3();
	new_node->value3 = value;

	if (isEmpty3())//Revisa si esta vacio Grupo_1
	{
		start3 = new_node;
		end3 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next3 = start3;
		start3 = new_node;
	}
	count3++;
}

void List::InsertAtEnd3(int value) {
	Node3* new_node = new Node3();
	new_node->value3 = value;

	if (isEmpty3()) { //The list is empty
		start3 = new_node;
		end3 = new_node;
	}
	else { //The list is not empty
		end3->next3 = new_node;
		end3 = new_node;
	}
	count3++;
}

void List::InsertAtStart4(int value) {
	Node4* new_node = new Node4();
	new_node->value4 = value;

	if (isEmpty4())//Revisa si esta vacio Grupo_1
	{
		start4 = new_node;
		end4 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next4 = start4;
		start4 = new_node;
	}
	count4++;
}

void List::InsertAtEnd4(int value) {
	Node4* new_node = new Node4();
	new_node->value4 = value;

	if (isEmpty4()) { //The list is empty
		start4 = new_node;
		end4 = new_node;
	}
	else { //The list is not empty
		end4->next4 = new_node;
		end4 = new_node;
	}
	count4++;
}

void List::InsertAtStart5(int value) {
	Node5* new_node = new Node5();
	new_node->value5 = value;

	if (isEmpty5())//Revisa si esta vacio Grupo_1
	{
		start5 = new_node;
		end5 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next5 = start5;
		start5 = new_node;
	}
	count5++;
}

void List::InsertAtEnd5(int value) {
	Node5* new_node = new Node5();
	new_node->value5 = value;

	if (isEmpty5()) { //The list is empty
		start5 = new_node;
		end5 = new_node;
	}
	else { //The list is not empty
		end5->next5 = new_node;
		end5 = new_node;
	}
	count5++;
}

void List::InsertAtStart6(int value) {
	Node6* new_node = new Node6();
	new_node->value6 = value;

	if (isEmpty6())//Revisa si esta vacio Grupo_1
	{
		start6 = new_node;
		end6 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next6 = start6;
		start6 = new_node;
	}
	count6++;
}

void List::InsertAtEnd6(int value) {
	Node6* new_node = new Node6();
	new_node->value6 = value;

	if (isEmpty6()) { //The list is empty
		start6 = new_node;
		end6 = new_node;
	}
	else { //The list is not empty
		end6->next6 = new_node;
		end6 = new_node;
	}
	count6++;
}

void List::InsertAtStart7(int value) {
	Node7* new_node = new Node7();
	new_node->value7 = value;

	if (isEmpty7())//Revisa si esta vacio Grupo_1
	{
		start7 = new_node;
		end7 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next7 = start7;
		start7 = new_node;
	}
	count7++;
}

void List::InsertAtEnd7(int value) {
	Node7* new_node = new Node7();
	new_node->value7 = value;

	if (isEmpty7()) { //The list is empty
		start7 = new_node;
		end7 = new_node;
	}
	else { //The list is not empty
		end7->next7 = new_node;
		end7 = new_node;
	}
	count7++;
}

void List::InsertAtStart8(int value) {
	Node8* new_node = new Node8();
	new_node->value8 = value;

	if (isEmpty8())//Revisa si esta vacio Grupo_1
	{
		start8 = new_node;
		end8 = new_node;
	}
	else //Si existe uno o mas nodos en Grupo_1
	{
		new_node->next8 = start8;
		start8 = new_node;
	}
	count8++;
}

void List::InsertAtEnd8(int value) {
	Node8* new_node = new Node8();
	new_node->value8 = value;

	if (isEmpty8()) { //The list is empty
		start8 = new_node;
		end8 = new_node;
	}
	else { //The list is not empty
		end8->next8 = new_node;
		end8 = new_node;
	}
	count8++;
}

//Extract operation

Node* List::ExtractAtStart() {

	Node* temp = start;
	if (!isEmpty()) {
		start = start->next;
		if (count == 1) {
			end = start;
		}
		count--;
	}
	return temp;
}

Node* List::ExtractAtEnd() {
	Node* temp = end;
	if (!isEmpty()) {
		if (count == 1) {
			end = end->next;
			start = end;
		}
		else {
			Node* pretemp = start;
			temp = pretemp->next;
			while (temp != end) {
				pretemp = temp;
				temp = pretemp->next;
			}
			pretemp->next = temp->next;
			end = pretemp;
		}
		count--;
	}
	return temp;
}

Node2* List::ExtractAtStart2() {
	Node2* temp2 = start2;
	if (!isEmpty2()) {
		start2 = start2->next2;
		if (count2 == 1) {
			end2 = start2;
		}
		count2--;
	}
	return temp2;
}

Node2* List::ExtractAtEnd2() {
	Node2* temp2 = end2;
	if (!isEmpty2()) {
		if (count2 == 1) {
			end2 = end2->next2;
			start2 = end2;
		}
		else {
			Node2* pretemp2 = start2;
			temp2 = pretemp2->next2;
			while (temp2 != end2) {
				pretemp2 = temp2;
				temp2 = pretemp2->next2;
			}
			pretemp2->next2 = temp2->next2;
			end2 = pretemp2;
		}
		count2--;
	}
	return temp2;
}

Node3* List::ExtractAtStart3() {
	Node3* temp3 = start3;
	if (!isEmpty3()) {
		start3 = start3->next3;
		if (count3 == 1) {
			end3 = start3;
		}
		count3--;
	}
	return temp3;
}

Node3* List::ExtractAtEnd3() {
	Node3* temp3 = end3;
	if (!isEmpty3()) {
		if (count3 == 1) {
			end3 = end3->next3;
			start3 = end3;
		}
		else {
			Node3* pretemp3 = start3;
			temp3 = pretemp3->next3;
			while (temp3 != end3) {
				pretemp3 = temp3;
				temp3 = pretemp3->next3;
			}
			pretemp3->next3 = temp3->next3;
			end3 = pretemp3;
		}
		count3--;
	}
	return temp3;
}

Node4* List::ExtractAtStart4() {
	Node4* temp4 = start4;
	if (!isEmpty4()) {
		start4 = start4->next4;
		if (count4 == 1) {
			end4 = start4;
		}
		count4--;
	}
	return temp4;
}

Node4* List::ExtractAtEnd4() {
	Node4* temp4 = end4;
	if (!isEmpty4()) {
		if (count4 == 1) {
			end4 = end4->next4;
			start4 = end4;
		}
		else {
			Node4* pretemp4 = start4;
			temp4 = pretemp4->next4;
			while (temp4 != end4) {
				pretemp4 = temp4;
				temp4 = pretemp4->next4;
			}
			pretemp4->next4 = temp4->next4;
			end4 = pretemp4;
		}
		count4--;
	}
	return temp4;
}

Node5* List::ExtractAtStart5() {
	Node5* temp5 = start5;
	if (!isEmpty5()) {
		start5 = start5->next5;
		if (count5 == 1) {
			end5 = start5;
		}
		count5--;
	}
	return temp5;
}

Node5* List::ExtractAtEnd5() {
	Node5* temp5 = end5;
	if (!isEmpty5()) {
		if (count5 == 1) {
			end5 = end5->next5;
			start5 = end5;
		}
		else {
			Node5* pretemp5 = start5;
			temp5 = pretemp5->next5;
			while (temp5 != end5) {
				pretemp5 = temp5;
				temp5 = pretemp5->next5;
			}
			pretemp5->next5 = temp5->next5;
			end5 = pretemp5;
		}
		count5--;
	}
	return temp5;
}

Node6* List::ExtractAtStart6() {
	Node6* temp6 = start6;
	if (!isEmpty6()) {
		start6 = start6->next6;
		if (count6 == 1) {
			end6 = start6;
		}
		count6--;
	}
	return temp6;
}

Node6* List::ExtractAtEnd6() {
	Node6* temp6 = end6;
	if (!isEmpty6()) {
		if (count6 == 1) {
			end6 = end6->next6;
			start6 = end6;
		}
		else {
			Node6* pretemp6 = start6;
			temp6 = pretemp6->next6;
			while (temp6 != end6) {
				pretemp6 = temp6;
				temp6 = pretemp6->next6;
			}
			pretemp6->next6 = temp6->next6;
			end6 = pretemp6;
		}
		count6--;
	}
	return temp6;
}

Node7* List::ExtractAtStart7() {
	Node7* temp7 = start7;
	if (!isEmpty7()) {
		start7 = start7->next7;
		if (count7 == 1) {
			end7 = start7;
		}
		count7--;
	}
	return temp7;
}

Node7* List::ExtractAtEnd7() {
	Node7* temp7 = end7;
	if (!isEmpty7()) {
		if (count7 == 1) {
			end7 = end7->next7;
			start7 = end7;
		}
		else {
			Node7* pretemp7 = start7;
			temp7 = pretemp7->next7;
			while (temp7 != end7) {
				pretemp7 = temp7;
				temp7 = pretemp7->next7;
			}
			pretemp7->next7 = temp7->next7;
			end7 = pretemp7;
		}
		count7--;
	}
	return temp7;
}

Node8* List::ExtractAtStart8() {
	Node8* temp8 = start8;
	if (!isEmpty8()) {
		start8 = start8->next8;
		if (count8 == 1) {
			end8 = start8;
		}
		count8--;
	}
	return temp8;
}

Node8* List::ExtractAtEnd8() {
	Node8* temp8 = end8;
	if (!isEmpty8()) {
		if (count8 == 1) {
			end8 = end8->next8;
			start8 = end8;
		}
		else {
			Node8* pretemp8 = start8;
			temp8 = pretemp8->next8;
			while (temp8 != end8) {
				pretemp8 = temp8;
				temp8 = pretemp8->next8;
			}
			pretemp8->next8 = temp8->next8;
			end8 = pretemp8;
		}
		count8--;
	}
	return temp8;
}

//Search operations

bool List::isEmpty() {
	return count == 0;
}

bool List::isEmpty2() {
	return count2 == 0;
}

bool List::isEmpty3() {
	return count3 == 0;
}

bool List::isEmpty4() {
	return count4 == 0;
}

bool List::isEmpty5() {
	return count5 == 0;
}

bool List::isEmpty6() {
	return count6 == 0;
}

bool List::isEmpty7() {
	return count7 == 0;
}

bool List::isEmpty8() {
	return count8 == 0;
}

//void List::suprimirCola(Node*& frente, Node*& fin, char n) {
//	n = frente->value;
//	Node* aux = frente;
//
//	if (frente == fin) {
//		frente = nullptr;
//		fin = nullptr;
//	}
//	else {
//		frente = frente->next;
//	}
//	delete aux;
//
//}
//