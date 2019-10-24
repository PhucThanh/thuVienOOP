#pragma once
#include "ListHoaDon.h"
#include "HoaDon.h"
#include <string>
#include <iostream>
using namespace std;
class User
{
	string name;
	int age;
	string pass;
	ListHoaDon dsHoaDon;
	bool loginStatus;
public:
	bool login();
	User();
	User(string name, int age, string pass);
	~User();
	void addHoaDon(HoaDon);
	void inHoaDon();
	bool getLoginStatus();
	int getHoaDonSize();
	HoaDon& operator[](int);
	void removeBookAt(int);
};