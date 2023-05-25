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
		Book(Pprice, Pname, "오프라인")
	{
		std::cout << "Paper_Book 객체 확인\n" << std::endl;

		if (bookshelf::Chk_count()) {
			
			std::cout << "책의 개수 초과"  << "\n" <<
				"책을 넣을 수 없습니다. "<< "\n"
				<< "생성취소.\n" << std::endl;

			bookshelf::M_count();
			Book::Get_book_number()--;
		}
	}
};