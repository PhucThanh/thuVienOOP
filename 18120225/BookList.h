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
	int size();
	void addLast(Book);
	void printList();
	void printList(vector<int>);

	Book& operator[](int);

	vector<int> findBookByIsbn(string);
	vector<int> findBookByName(string);	//Neu bi trung se bat buoc find by isbn
	int findBook();	//Tra ve duy nhat vi tri tim dc. -1 neu khong co
	void removeBook(int);
	void bookSetting(int);

	bool operator==(BookList);
};

