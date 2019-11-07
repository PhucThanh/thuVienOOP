#include "TacGia.h"

TacGia::TacGia(string name, string pass)
{
	this->name = name;
	this->pass = pass;
}

TacGia::TacGia()
{
}


TacGia::~TacGia()
{
}

void TacGia::addBookToList(Book b) {
	list.addLast(b);
}
void TacGia::removeBook(int i)
{
	list.removeBook(i);
}
void TacGia::editBook(int i)
{
	list.bookSetting(i);
}
void TacGia::addBook()
{
	Book b;
	cin >> b;
	addBookToList(b);
}