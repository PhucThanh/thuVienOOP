#include "NXB.h"

NXB::NXB()
{
}

NXB::~NXB()
{
}

NXB::NXB(string name,string pass)
{
	this->name = name;
	this->pass = pass;
}

void NXB::addBookToList(Book b) {
	list.addLast(b);
}
void NXB::removeBook(int i)
{
	list.removeBook(i);
}
void NXB::editBook(int i)
{
	list.bookSetting(i);
}
void NXB::addBook()
{
	Book b;
	cin >> b;
	addBookToList(b);
}