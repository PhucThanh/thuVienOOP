#include "Book.h"
//Constructor
Book::Book()
{
	name = "noname";
	isbn = "0";
	price = -1;
	count = 1;
}
Book::Book(string name = "", string id = "", int price = -1, int count = 1) {
	this->name = name;
	this->isbn = id;
	this->price = price;
	this->count = count;
}
Book::~Book()
{
	
}
Book::Book(const Book& b)
{
	name = b.name;
	isbn = b.isbn;
	price = b.price;
	count = b.count;
}
string Book::getName() {
	return name;
}
string Book::getIsbn() {
	return isbn;
}
int Book::getPrice() {
	return price;
}
/*
void Book::set() {
	cin.ignore();
	cout << "Name :";
	getline(cin,name,'\n');
	cout << "Id :";
	cin >> isbn;
	cout << "Price :";
	cin >> price;
	cout << "----------" << endl;
}
*/
void Book::setName(string& str) {
	name = str;
}
void Book::setIsbn(string& str) {
	isbn = str;
}
void Book::setPrice(int& p) {
	if(p>0)
		price = p;
}

void Book::printBook() {

	//cout << left<<setw(20) << name <<setw(12)<<isbn<<setw(12)<<price<<endl;
	string s[] = { name,isbn,to_string(price) };
	int spacing[] = { 18,18,18 };
	drawRecord(s,spacing,3);
}
bool Book::operator==(Book b)
{
	if (name == b.name) {
		if (isbn == b.isbn) {
			if (price == b.price) {
				return true;
			}
		}
	}
	return false;
}
bool Book::operator!=(Book b)
{
	if (*this == b)
		return false;
	return true;
}
Book& Book::operator=(Book b)
{
	this->name = b.name;
	this->price = b.price;
	this->isbn = b.isbn;
	return *this;
}
void Book::bookSetting()
{
	cout << "Choose your action:"<<endl;
	cout << "1. Xoa" << endl;
	cout << "2. Cap gia" << endl;
	int input;
	cin >> input;
	if(input==1)
	{
		this->~Book();
	}
	else
	{
		cout << "New price = ";
		cin >> input;
		this->setPrice(input);
	}
}

istream& operator>>(istream& is, Book& b) 
{
	//is.ignore();
	cout << "Name :";
	getline(is, b.name, '\n');
	cout << "Id :";
	is >> b.isbn;
	cout << "Price :";
	is >> b.price;
	cout << "----------" << endl;
	return is;
}