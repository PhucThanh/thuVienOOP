#include "ListHoaDon.h"
ListHoaDon::ListHoaDon() 
{

}
int ListHoaDon::size() 
{
	return hoaDon.size();
}
void ListHoaDon::addLast(HoaDon h) 
{
	hoaDon.push_back(h);
}
void ListHoaDon::printList() 
{
	string s[] = { "Name","ID","Price","Count"};
	int spacing[] = { 18,18,18,18 };
	drawRecord(s, spacing, 4);
	cout << "--------------------------------------------------------" << endl;
	for (int i = 0;i < hoaDon.size();i++) 
	{
		hoaDon[i].print();
	}
	cout << setw(60) << "Total : " << this->getPrice();
}
void ListHoaDon::printList(vector<int> p) 
{
	string s[] = { "Name","ID","Price","Count" };
	int spacing[] = { 18,18,18,18 };
	drawRecord(s, spacing, 4);
	cout << "--------------------------------------------------------" << endl;
	for (int i = 0;i < p.size();i++)
	{
		hoaDon[p[i]].print();
	}
	cout << setw(60) << "Total : " << this->getPrice();
}
int ListHoaDon::getPrice() 
{
	int sum=0;
	for (int i = 0;i < hoaDon.size();i++)
	{
		sum += hoaDon[i].getPrice();
	}
	return sum;
}