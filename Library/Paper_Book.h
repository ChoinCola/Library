#pragma once
#include "head.h"

#include "bookshelf.h"
#include "Book.h"

class Paper_Book abstract : public Book, public bookshelf
{
public:
	Paper_Book(
		unsigned int Pprice,
		std::string Pname) :
		Book(Pprice, Pname, "��������")
	{
		std::cout << "Paper_Book ��ü Ȯ��\n" << std::endl;

		if (bookshelf::Chk_count()) {
			
			std::cout << "å�� ���� �ʰ�"  << "\n" <<
				"å�� ���� �� �����ϴ�. "<< "\n"
				<< "�������.\n" << std::endl;

			bookshelf::M_count();
			Book::Get_book_number()--;
		}
	}
};