#include "Author.h"
Author::Author() 
{
}
Author::~Author() 
{
}
Author::Author(string name1, string pass, string name2) :User(name1, pass, name2) 
{

}
Book Author::createNewBook()
{
	/*Trash*/
	string input1, input2;
	int input3 = 0, input4 = 0;
	cout << "Nhap sach voi tu cach Author" << endl;
	cout << "Ten sach :";
	cin.ignore();
	getline(cin, input1);
	cout << "ISBN :";
	cin >> input2;
	cout << "Price :";
	cin >> input3;
	cout << "Stock :";
	cin >> input4;
	Book book(input1, input2, input3, input4);
	book.setAuthor(this->name);
	bookList.push_back(&book);//Point to this book
	return book;
}