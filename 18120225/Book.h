#pragma once
#include<string>
#include "UI.h"
using namespace std;
class Book
{
	string name;
	string isbn;
	int price;
	int count;
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
	//void set();
	void setName(string&);
	void setIsbn(string&);
	void setPrice(int&);
	void setCount(int);

	void printBook();

	bool operator==(Book);
	bool operator!=(Book);
	Book& operator=(Book);
	void bookSetting();
	friend istream& operator>>(istream& is, Book& b);//Nhap thong tin sach
};
