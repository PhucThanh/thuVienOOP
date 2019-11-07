#pragma once
#include <string>
#include "BookList.h"
using namespace std;
class NXB
{
	string name;
	string pass;
	BookList list;
public:
	NXB();
	NXB(string, string);
	~NXB();
	void addBook();
	void addBookToList(Book);
	void removeBook(int);
	void editBook(int);
};
