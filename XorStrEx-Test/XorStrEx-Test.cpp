
#include <iostream>
#include "XorStrEx/XorStrEx.hpp"

const auto GlobalVarTest = _xor_("GlobalVarTest");

int main()
{
    std::cout << _xor_("test1").c_str() << '\n';

	auto test = _xor_("test2");
	std::cout << test.c_str() << '\n';

	std::string s = test;
	std::cout << s << '\n';

	std::string s2 = _xor_("test3");
	std::cout << s2 << '\n';

	auto s3 = _xor_("test4");
	s3.decrypt();
	std::cout << s3 << '\n';
	s3.encrypt();

	auto s4 = _xor_("test5");
	char* strPtr = s4.c_str_raw();
	s4.decrypt();
	std::cout << strPtr << '\n';
	s4.encrypt();

	std::cout << GlobalVarTest.str() << '\n';
}