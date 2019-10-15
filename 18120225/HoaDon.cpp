#include "HoaDon.h"
#include "Book.h"
#include <iostream>
#include <iomanip>
HoaDon::HoaDon()
{
	price = 0;
	count = 0;
}
HoaDon::~HoaDon()
{
}
int HoaDon::getPrice() { return price; }
int HoaDon::getCount() { return count; }

void HoaDon::print()
{
	//book.printBook();
	//cout << setw(20) << book.getName() << setw(20) << book.getIsbn() << setw(20) << book.getPrice() << setw(20) << count<<endl;
	string s[] = { book.getName(),book.getIsbn(),to_string(book.getPrice()),to_string(count) };
	int spacing[] = { 18,18,18,0 };
	drawRecord(s, spacing, 4);
}
void HoaDon::setCount(int c) 
{
	count = c;
	price = book.getPrice() * count;
}
HoaDon& HoaDon::operator=(Book b) 
{
	this->book = b;
	return *this;
}