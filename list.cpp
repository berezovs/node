#include <iostream>
#include "list.hpp"
#include "node.hpp"


List::List(){
	this->head = nullptr;
	this->tail = nullptr;
	this->length = 0;
}
void List::prepend(int value){
	Node *newNode = new Node(value);
	newNode->setNext(this->head);
	this->head = newNode;
	if(this->isEmpty()){
		this->tail = newNode;
	}
	this->length++;
	
}

void List::append(int value){
	Node *newNode = new Node(value);
	if(this->isEmpty()){
	this->head = newNode;
	}
	this->tail->setNext(newNode);
	this->tail = newNode;
}

void List::insertAt(int position, int value){
	if(position<0 || position> this->getLength()){
		return;
	}if(position==0){
		this->prepend(value);
	}if(position==this->getLength()){
		this->append(value);
	}
	Node * current = this->head;
	int currentPosition = 0;
	while(){
		current = current->getNext();
	}
}

int List::getLength(){
	return this->length;
}

bool List::isEmpty(){
	return this->length==0;
}


void List::print(){
	
Node *current = this->head;

while(current!=nullptr) {
		std::cout<<current->getValue()<<std::endl;
		current = current->getNext();
	}
	
}