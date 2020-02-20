#include <iostream>
#include "node.hpp"

int main() {
	Node *firstNode = new Node(5);
  std::cout<<firstNode->getValue()<<std::endl;
	firstNode->setValue(7);
	std::cout<<firstNode->getValue()<<std::endl;

	Node *secondNode = new Node(8);
}