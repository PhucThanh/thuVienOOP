#pragma once
#ifndef _BOOK_H_
#define _BOOK_H_
#endif // !_NXB_H_
#include<string>
#include "UI.h"
using namespace std;
class Book
{
	string name;
	string isbn;
	int price;
	int count;
	string nxb;
	string author;
public:
	//Constructor
	Book();
	Book(string, string, int,int);
	~Book();
	Book(const Book& b);

	//Get method
	string getName();
	string getIsbn();
	int getPrice();
	int getCount();
	
	//Set method
	void setName(string&);
	void setIsbn(string&);
	void setNxb(string&);
	void setAuthor(string&);
	void setPrice(int&);
	void setCount(int);
	//void setNXB(NXB);
	void printBook();

	bool operator==(Book);
	bool operator!=(Book);
	Book& operator=(Book);
	void bookSetting();
	friend istream& operator>>(istream& is, Book& b);//Nhap thong tin sach
};
