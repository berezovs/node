 #ifndef LIST_HPP
 #define LIST_HPP
 #include "node.hpp"
class List{
	public:
		List();
		void prepend(int value);
		void print();
		int getLength();
		bool isEmpty();
		void append(int value);
		void insertAt(int position, int value);
	private:
	Node* head, *tail;
	int value, length;

};
 #endif