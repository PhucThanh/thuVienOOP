#pragma once
#ifndef _NXB_H_
#define _NXB_H_
#endif // !_NXB_H_

#include <string>
#include "User.h"
#include "BookList.h"
using namespace std;
class NXB : public User
{
	vector<Book*> bookList;
public:
	NXB();
	NXB(string, string, string);
	~NXB();
	string getRole() { return "NXB"; };
	Book createNewBook();
};
