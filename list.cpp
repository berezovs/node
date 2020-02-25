#include <iostream>
#include "list.hpp"
#include "node.hpp"


List::List(){
	this->head = nullptr;
}
void List::prepend(int value){
	Node *newNode = new Node(value);
	newNode->setNext(this->head);
	this->head = newNode;
	
}
void List::print(){
	
Node *current = this->head;
while(current!=nullptr) {
		std::cout<<current->getValue()<<std::endl;
		current = current->getNext();
	}
	
}