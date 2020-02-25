#include <iostream>
#include "node.hpp"
#include "list.hpp"

int main() {
	Node *firstNode = new Node(5);
  //std::cout<<firstNode->getValue()<<std::endl;
	firstNode->setValue(7);
	//std::cout<<firstNode->getValue()<<std::endl;

	Node *secondNode = new Node(8);
	firstNode->setNext(secondNode);

	//std::cout<<firstNode->getNext()->getValue()<<std::endl;

	List *myList = new List();
	myList->prepend(3);
	myList->prepend(2);
	myList->print();
}