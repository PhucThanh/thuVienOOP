#include <iostream>
//#include "Book.h"
//#include "HoaDon.h"
//#include "ListHoaDon.h"
//#include "BookList.h"
#include "User.h"
#include"Lib.h"
#include "TacGia.h"
#include "NXB.h"
#include "Author.h"
using namespace std;
int main() {
	Lib library;
	User* admin;
	admin= new Admin("admin", "pass", "Phuc");
	User* nxb = new NXB("nxb", "pass","Tre");
	User* au = new Author("au", "pass", "Nguyen Ngoc Anh");

	library.addUser(admin);
	library.addUser(nxb);
	library.addUser(au);
	library.creatNewUser();
	library.login();


	library.createNewBook();

	/*
	cout << "Book List:" << endl;
	cout << "-------------" << endl;
	library.printAllBook();
	cout << "User List:" << endl;
	cout << "-------------" << endl;
	library.printUserList();
	*/
	return 0;
}
