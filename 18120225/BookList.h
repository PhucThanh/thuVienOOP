#pragma once
#include <vector>
#include "Book.h"
#include "UI.h"
class BookList
{
	vector<Book> book;
public:
	//constructor
	BookList();
	~BookList();
	void input();
	//get
	int getBookCount();
	void addLast(Book);
	void removeLast();
	void printList();
	void printList(vector<int>);
	bool operator==(BookList);

	Book getBookAt(int);
	vector<int> findBookByIsbn(string);
	vector<int> findBookByName(string);	//Neu bi trung se bat buoc find by isbn
	int findBook();	//Tra ve duy nhat vi tri tim dc
	void deleteBook(int);
	void bookSetting(int);
};

