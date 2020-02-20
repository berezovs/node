#include <iostream>
#include "list.hpp"
#include "node.hpp"


List::List(){
	this->head = nullptr;
}
void List::print(){
	Node *newNode = new Node(value);
	if(this->head==nullptr){
		this->head = newNode;
	}
}
void List::prepend(int value){
	std::cout<<this->head<<std::endl;
}