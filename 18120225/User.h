#pragma once
#include "ListHoaDon.h"
#include "HoaDon.h"
#include <string>
#include <iostream>
using namespace std;
class User
{
	string name;
	string userName;
	int age;

	string password;
	ListHoaDon dsHoaDon;
	bool loginStatus;
public:
	bool login();
	User();
	User(string name, int age, string pass);
	~User();
	void addHoaDon(HoaDon);
	void printHoaDon();
	bool getLoginStatus();
	int getHoaDonSize();
	HoaDon& operator[](int);
	void removeBookAt(int);
};