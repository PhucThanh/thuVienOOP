#include <iostream>
#include "Book.h"
#include "HoaDon.h"
#include "BookList.h"
#include "ListHoaDon.h"
using namespace std;
int main() {
	
	BookList bl;
	ListHoaDon bill;
	bl.input();
	bl.printList();

	int pos = -1;
	int n;
	cout << "Nhap so luong sach them vao bill :";
	cin >> n;
	for (int i = 0; i < n; i++) {
		pos = bl.findBook();
		if (pos > -1) 
		{
			HoaDon h;
			h = bl.getBookAt(pos);
			int c;
			cout << "> Nhap so luong :" << endl;
			cin >> c;
			h.setCount(c);
			bill.addLast(h);
		}
		else if (pos == 0) 
		{
			cout << "> Khong tim thay sach do\n";
		}
	}
	bill.printList();
	return 0;
}
