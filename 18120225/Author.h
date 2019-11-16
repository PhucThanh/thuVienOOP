#pragma once
#include "User.h"
#include "BookList.h"
class Author:public User
{
	vector<Book*> bookList;
public:
	Author();
	Author(string, string, string);
	~Author();
	string getRole() { return "Author"; };
	Book createNewBook();
};

