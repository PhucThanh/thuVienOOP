#pragma once
#include "HoaDon.h"
#include <iostream>
#include <iomanip>
class ListHoaDon
{
	vector<HoaDon> hoaDon;
public:
	ListHoaDon();
	int size();
	void addLast(HoaDon);
	void printList();
	void printList(vector<int>);//only print at vector
	int getPrice();
	HoaDon& operator[](int);
	void removeBookAt(int);
};

