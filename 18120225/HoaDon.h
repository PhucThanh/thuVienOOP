#pragma once
#include "Book.h"
#include "BookList.h"
class HoaDon
{
	Book book;
	int count;
public:
	HoaDon();
	~HoaDon();
	int getPrice();
	int getCount();
	void print();
	void setCount(int); // auto set price here
	HoaDon& operator=(Book);
};