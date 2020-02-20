 #ifndef LIST_HPP
 #define LIST_HPP
 #include "node.hpp"
class List{
	public:
		List();
		void prepend(int value);
		void print();
	private:
	Node* head;
	int value;

};
 #endif