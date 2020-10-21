#include "List.h"


Lista::Lista() {
	start = nullptr;
	end = nullptr;
	count = 0;


};

//Insert Operations

void Lista::InsertAtStart(char value, char* color) {

	Node* new_node = new Node();
	new_node->value = value;
	new_node->color = color;

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

void Lista::InsertAtEnd(char value, char* col) {
	Node* new_node = new Node();
	new_node->value = value;
	new_node->color = col;
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


Node* Lista::ExtractIndex(int indice) {
	Node* nodo;
	nodo = start;
	if (nodo == nullptr)
	{
		return nullptr;
	}
	else
	{
		if (indice >= count)
		{
			return nullptr;
		}
		else
		{
			for (int i = 0; i <= indice; i++)
			{
				if (i < indice)
					nodo = start->next;
				else
					return nodo;
			}
		}
	}

}



//Extract operation

Node* Lista::ExtractAtStart() {

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

Node* Lista::ExtractAtEnd() {
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


//Search operations

bool Lista::isEmpty() {
	if (count == 0)
		return true;
	else
		return false;
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