#include <iostream>
#include "Book.h"
#include "HoaDon.h"
#include "BookList.h"
#include "ListHoaDon.h"
#include "Guest.h"
#include "User.h"
using namespace std;
int main() {
	
	BookList bl;
	bl.input();
	bl.printList();

	Guest guest;
	User user("admin",19,"pass");

	int input;
	do
	{
		if (user.getLoginStatus())
			cout << "> Xin chao User" << endl;
		else
			cout << "> Xin chao Guest" << endl;
		cout << "> 1. Tim kiem sach" << endl;
		if (user.getLoginStatus())
			cout << "> 2. Cap nhat hoa don" << endl;
		cout << "> 0.Thoat" << endl;
		cin >> input;
		if (input == 0) break;

		if (input == 1) {
			int bookPos = guest.findBook(bl);
			if (bookPos == -1)
			{

			}
			else
			{
				if (!user.getLoginStatus())
				{
					if (user.login())
					{
						cout << "> Login success" << endl;
					}
					else
					{
						cout << "> Wrong password or username" << endl;
						continue;
					}
				}
				if (user.getLoginStatus())
				{
					HoaDon hd;
					hd = bl.getBookAt(bookPos);
					cout << "> Chon so luong muon mua :";
					int count;
					cin >> count;
					hd.setCount(count);
					user.addHoaDon(hd);
					user.inHoaDon();
				}
			}
		}else if((input==2) && (user.getLoginStatus()))
		{
			user.inHoaDon();
			cout << "> 1. Thay doi so luong" << endl;
			cout << "> 2. Xoa hoa don" << endl;
			cin >> input;
			int pos;
			if(input ==1)
			{
				cout << "> Nhap vi tri hoa don can thay doi so luong: ";
				cin >> pos;
				if (pos<user.getHoaDonSize() && pos>=0)
				{
					int count;
					cout << "Nhap so luong moi : ";
					cin >> count;
					user[pos].setCount(count);
				}
			}
			else
			{
				cout << "> Nhap vi tri hoa don muon xoa : ";
				cin >> pos;
				if (pos < user.getHoaDonSize() && pos >= 0)
				{
					user.removeBookAt(pos);
				}
			}
			user.inHoaDon();
		}
	} while (input != 0);

	user.inHoaDon();
	return 0;
}
