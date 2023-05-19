#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	int noMhs;
	char nama[20];
	Node* next;
};

class List
{
	Node* START;
public:
	List();
	void addNode();
	bool Search(int nim, Node** current, Node** previous);
	bool listEmpty();
	bool delNode(int elemenet);
	void traverse();
};

List::List()
{
	START = NULL;
}

void List::addNode() /*Menambah sebuah Node kedalam list*/
{

}