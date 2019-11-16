#include "BookList.h"
#include "Book.h"
BookList::BookList()
{
	
}
BookList::~BookList()
{
}
int BookList::size() {
	return book.size();
}
void BookList::addLast(Book &b) {
	book.push_back(b);
}
void BookList::input() {
	cout << "Nhap so luong sach :";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Book b;
		cin >> b;
		this->addLast(b);
	}
}
void BookList::printList() {
	//cout << left << setw(20) << "Name" << setw(12) << "ID" << setw(12) << "price" << setw(12)<<endl;
	
	string s[] = { "Name","ID","Price" };
	int spacing[] = { 18,18,18 };
	drawRecord(s, spacing, 3);
	cout << "--------------------------------------------------------" << endl;
	for(int i=0;i<book.size();i++)
	{
		book[i].printBook();
	}
}
void BookList::printList(vector<int> v) 
{
	if (v.size() > 0)
	{
		string s[] = { "Name","ID","Price" };
		int spacing[] = { 18,18,18 };
		drawRecord(s, spacing, 3);
		cout << "--------------------------------------------------------" << endl;
		for (int i = 0;i < v.size();i++)
		{
			book[v[i]].printBook();
		}
	}
}
bool BookList::operator==(BookList b) {
	if(book.size()==b.book.size())
	{
		for (int i = 0; i < book.size(); i++) 
		{
			if(book[i]!=b.book[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

Book& BookList::operator[](int n) 
{
	return this->book[n];
}
vector<int> BookList::findBookByIsbn(string id) {
	vector<int> pos;
	for (int i = 0; i < book.size(); i++) {
		if (book[i].getIsbn() == id) {
			pos.push_back(i);
		}
	}
	return pos;
}
vector<int> BookList::findBookByName(string s)
{
	vector<int> pos;
	for(int i=0;i< book.size();i++)
	{
		if(book[i].getName()==s)
		{
			pos.push_back(i);
		}
	}
	return pos;
}
void BookList::removeBook(int i)
{
	if(book.size() >i)
	{
		book.erase(book.begin()+i);
	}
}

void BookList::bookSetting(int i)
{
	cout << "What to do with this book: " << endl;
	cout << "1.Remove" << endl;
	cout << "2.Change price" << endl;
	int n;
	cin >> n;
	if (n == 1) 
	{
		removeBook(i);
	}
	else 
	{
		cout << "Old price = " << book[i].getPrice() << " ; " << "New price = ";
		int p;
		cin >> p;
		book[i].setPrice(p);
	}
}
int BookList::findBook() 
{
	cout << "> Tim kiem theo:"<<endl;
	cout << "> 1.ISBN" << endl;
	cout << "> 2.Ten sach" << endl;
	cout << "> ";
	int n;
	cin >> n;
	cin.ignore();
	string input;
	vector<int> list;
	if (n == 1)
	{
		cout << "> Nhap ISBN can tim: ";
		getline(cin, input, '\n');
		list=this->findBookByIsbn(input);
	}
	else if (n == 2) 
	{
		cout << ">  ten sach can tim: ";
		getline(cin, input, '\n');
		list=this->findBookByName(input);
	}
	else 
	{
	
	}
	if (list.size() > 0) 
	{
		if (list.size() > 1) 
		{
			cout << "> Nhieu ten sach bi trung" << endl;
			this->printList(list);
			cout << "> Vui long nhap ISBN :";
			cin >> input;
			list = this->findBookByIsbn(input);
		}
	}
	else 
	{
		cout << "> Khong tim thay" << endl;
	}
	if(list.size()>0)
		return list[0];
	else
		return -1;
}