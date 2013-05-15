#ifndef EX13_14_H
#define EX13_14_H

#include <iostream>

struct Exmpl {
	Exmpl() { std::cout << "Exmpl()" << std::endl; }
	Exmpl(const Exmpl&)
	{ std::cout << "Exmpl(const Exmpl&)" << std::endl; }
};

#endif
