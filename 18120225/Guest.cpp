#include "Guest.h"



Guest::Guest()
{
}


Guest::~Guest()
{
}

int Guest::findBook(BookList bl)
{
	int i = bl.findBook();
	return i;
}
void Guest::buyBook(int i)
{
	std::cout << "Ban muon mua cuon sach nay ?"<<std::endl;
	std::cout << "1. Yes" << endl;
	std::cout << "2. No" << endl;
	int input;
	std::cin >> input;
	if(input==1)
	{
		std::cout << "Please login" << std::endl;
	}
	else if(input==2)
	{
		
	}
}
