#pragma once
#include "Book.h"
#include "BookList.h"
#include <iostream>
class Guest
{

public:
	Guest();
	~Guest();
	int findBook(BookList);
	void buyBook(int);
};
