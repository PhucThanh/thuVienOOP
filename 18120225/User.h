#pragma once
#include "ListHoaDon.h"
#include "HoaDon.h"
#include <string>
#include <iostream>
using namespace std;
class OldUser
{
	string name;
	string userName;
	int age;

	string password;
	ListHoaDon dsHoaDon;
	bool loginStatus;
public:
	bool login();
	OldUser();
	OldUser(string name, int age, string pass);
	~OldUser();
	void addHoaDon(HoaDon);
	void printHoaDon();
	bool getLoginStatus();
	int getHoaDonSize();
	HoaDon& operator[](int);
	void removeBookAt(int);
};
class User 
{
protected:
	string userName;
	string userPass;

	string name;
	int age;
public:
	User();
	User(string, string);
	User(string, string, string);//login name,pass,real name
	string getUserName() { return userName; };
	string getPassWord() { return userPass; };
	void changePassWord();
	virtual string getRole()=0;//return Admin,NXB,aurthor
	virtual Book createNewBook() = 0;
};

class Admin :public User
{
public:
	Admin();
	Admin(string, string, string);
	string getRole()
	{
		return "Admin";
	};
	void createNewUser();
	Book createNewBook();
};