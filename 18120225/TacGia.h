#pragma once
#include<string>
#include"BookList.h"
using namespace std;
class TacGia
{
	string name;
	string pass;
	BookList list;
public:
	TacGia();
	TacGia(string, string);
	~TacGia();

	void addBook();
	void addBookToList(Book);
	void removeBook(int);
	void editBook(int);
};

