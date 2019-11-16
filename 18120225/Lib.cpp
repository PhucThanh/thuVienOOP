#include "Lib.h"
Lib::Lib() 
{
	loginStatus = false;
	currentUser = nullptr;
}
Lib::~Lib() 
{
	/*
	for (int i = 0;i < userList.size();i++)
	{
		if (userList[i]) 
		{
			free(userList[i]);
		}
	}
	*/
}
void Lib::addUser(User* u) 
{
	userList.push_back(u);
}
void Lib::printUserList() 
{
	for (int i = 0;i < userList.size();i++) 
	{
		//cout << "User[" << i << "]:" << endl;
		//cout << "User["<<i<<endl;
		cout << "User name :" << userList[i]->getUserName()<<endl;
	}
}
void Lib::login() 
{
	string input1, input2;
	cout << "====================" << endl;
	cout << "====== LOGIN =======" << endl;
	cout << "====================" << endl;
	cout << "User name:";
	cin >> input1;
	cout << "password:";
	cin >> input2;
	for (int i = 0;i < userList.size();i++) 
	{
		if (input1 == userList[i]->getUserName()) 
		{
			if (input2 == userList[i]->getPassWord()) 
			{
				cout << "Login successfully" << endl;
				currentUser = userList[i];
				cout << "You are the " << currentUser->getRole() << endl;
				loginStatus = true;
				break;
			}
		}
	}
	if (!loginStatus) cout << "Wrong user or password" << endl;
}

void Lib::creatNewUser() 
{
	cout << "Choose user type :" << endl;
	cout << "1-Admin" << endl;
	cout << "2-NXB" << endl;
	cout << "3-Author" << endl;
	int input;
	cin >> input;
	string username,name, pass;
	cout << "UserName :"; cin >> username;
	cout << "Name :";cin >> name;
	cout << "Password :";cin >> pass;

	User* user=NULL;
	switch (input) 
	{
	case 1:
		user = new Admin(username, pass,name);
		break;
	case 2:
		user = new NXB(username, pass,name);
		break;
	case 3:
		user = new Author(username, pass, name);
		break;
	}
	if (user)
		addUser(user);
	else
		throw "Unable to create User";
}
void Lib::createNewBook() 
{
	string s;
	if (currentUser)
	{
		Book b = currentUser->createNewBook();
		addBook(b);
	}
	else
	{
		cout << "Please login to add book" << endl;
	}
}
void Lib::addBook(Book b) 
{
	bookList.addLast(b);
}
void Lib::printAllBook() 
{
	for (int i = 0;i < bookList.size();i++) 
	{
		bookList[i].printBook();
	}
}