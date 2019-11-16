#include "User.h"



OldUser::OldUser()
{
	loginStatus = false;
}


OldUser::~OldUser()
{
}

OldUser::OldUser(string name, int age, string pass) 
{
	this->name = name;
	this->age = age;
	this->password = pass;
	loginStatus = false;
}
bool OldUser::getLoginStatus()
{
	return loginStatus;
}
bool OldUser::login()
{
	cout << "=================" << endl;
	cout << "> Please login:" << endl;
	cout << "=================" << endl;
	string name, pass;
	cout << "> Ten : ";
	cin >> name;
	cout << "> Password :";
	cin >> pass;
	if( (this->name==name)&&(this->password==pass))
	{
		//cout << "Login success" << endl;
		loginStatus = true;
		return true;
	}
	else
	{
		//cout << "Wrong password or username";
		return false;
	}
}
int OldUser::getHoaDonSize()
{
	return dsHoaDon.size();
}
void OldUser::addHoaDon(HoaDon h)
{
	dsHoaDon.addLast(h);
}
void OldUser::printHoaDon()
{
	dsHoaDon.printList();
}
HoaDon& OldUser::operator[](int i)
{
	return dsHoaDon[i];
}
void OldUser::removeBookAt(int i)
{
	dsHoaDon.removeBook(i);
}

User::User() 
{
	userName = "user";
	userPass = "pass";
	age = 0;
	name = "No Name";
}
User::User(string name, string pass) 
{
	userName = name;
	userPass = pass;
}
User::User(string name, string pass,string name2)
{
	userName = name;
	userPass = pass;
	this->name = name2;
}
Admin::Admin(string name1, string pass, string name2) : User(name1, pass, name2) 
{}
void User::changePassWord() 
{

}
void Admin::createNewUser() 
{
}
Book Admin::createNewBook() 
{
	/*Trash*/
	string input1, input2;
	int input3, input4;
	cout << "Nhap sach voi tu cach Admin" << endl;
	cout << "Ten sach :";
	cin >> input1;
	cout << "ISBN :";
	cin >> input2;
	cout << "Price :";
	cin >> input3;
	cout << "Stock :";
	cin >> input4;
	Book book(input1,input2,input3,input4);
	cout << "NXB :";
	//find NXB
	string inputName;
	cin >> inputName;

	cout << "Aurthor :";

	return book;
}