#pragma once
#include "head.h"

class Book abstract
{
	int booknumber;
	unsigned int price;
	std::string name;
	std::string site_name;
	static int staticbook_number;

public:
	auto Get_book_number() -> int& { return staticbook_number; }
	Book(unsigned int price,
		std::string name,
		std::string site_name) :
			price(price)
		,	name(name)
		,	site_name(site_name)
	{
		booknumber = Get_book_number();
		std::cout << Get_book_number() << "번째 책 객체 생성" << std::endl;
		Get_book_number()++;
	}
};
int Book::staticbook_number = 0;