#pragma once
#include "head.h"

class bookshelf abstract
{
	static int countdata;
	int set_max = 5;
public:
	bookshelf() { countdata++; }
	int& get_countdata() { return countdata; }
	const int get_max() const { return set_max; }
	void M_count() { get_countdata()--; }
	auto Chk_count() -> bool { return get_max() <= get_countdata(); }
};
int bookshelf::countdata = 0;