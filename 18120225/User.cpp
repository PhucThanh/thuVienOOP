#include "User.h"



User::User()
{
	loginStatus = false;
}


User::~User()
{
}

User::User(string name, int age, string pass) 
{
	this->name = name;
	this->age = age;
	this->pass = pass;
	loginStatus = false;
}
bool User::getLoginStatus()
{
	return loginStatus;
}
bool User::login()
{
	cout << "=================" << endl;
	cout << "> Please login:" << endl;
	cout << "=================" << endl;
	string name, pass;
	cout << "> Ten : ";
	cin >> name;
	cout << "> Password :";
	cin >> pass;
	if( (this->name==name)&&(this->pass==pass))
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
int User::getHoaDonSize()
{
	return dsHoaDon.size();
}
void User::addHoaDon(HoaDon h)
{
	dsHoaDon.addLast(h);
}
void User::inHoaDon()
{
	dsHoaDon.printList();
}
HoaDon& User::operator[](int i)
{
	return dsHoaDon[i];
}
void User::removeBookAt(int i)
{
	dsHoaDon.removeBookAt(i);
}