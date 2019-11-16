#pragma once
#include "BookList.h"
#include "User.h"
#include "NXB.h"
#include "Author.h"
class Lib
{
	BookList bookList;
	vector<User*> userList;
	bool loginStatus;
	User* currentUser;
public:
	Lib();
	~Lib();
	void addUser(User*);
	void printUserList();
	void login();
	void creatNewUser();//with input form
	void createNewBook();//Create a new book depend on user
	void addBook(Book);
	void printAllBook();
};

