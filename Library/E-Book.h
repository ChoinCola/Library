#pragma once
#include "head.h"

class E_Book abstract : public Book
{
public:
	E_Book(
		unsigned int Eprice,
		std::string Ename,
		std::string Esite_name) :
		Book(Eprice, Ename, Esite_name)
	{
		std::cout << "E_Book °´Ã¼ È®ÀÎ\n" << std::endl;
	}
};