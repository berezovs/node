#include "node.hpp"

Node::Node(int value){
this->value = value;
}

int Node::getValue(){
	return this->value;
}

void Node::setValue(int value){
	this->value = value;
}

void Node::setNext(Node *node){
	this->next = node;
}
Node *Node::getNext(){
	return next;
}