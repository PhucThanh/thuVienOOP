#include "NXB.h"

NXB::NXB()
{
}

NXB::~NXB()
{
}
NXB::NXB(string name, string pass,string name2) :User(name,pass,name2){}
Book NXB::createNewBook() 
{
	/*Trash*/
	string input1, input2;
	int input3=0, input4=0;
	cout << "Nhap sach voi tu cach NXB" << endl;
	cout << "Ten sach :";
	cin.ignore();
	getline(cin, input1);
	cout << "ISBN :";
	cin >> input2;
	cout << "Price :";
	cin >> input3;
	cout << "Stock :";
	cin >> input4;
	Book *book=new Book(input1,input2,input3,input4);
	book->setNxb(name);
	bookList.push_back(book);//Point to this book
	return *book;
}