#include "ex13_14.h"

#include <iostream>
#include <vector>

using namespace std;

void fun1(Exmpl e){}

void fun2(Exmpl& e) {}

int main()
{
	Exmpl e;
	std::cout << "fun1(e):" << std::endl;
	fun1(e);

	std::cout << "fun2(e):" << std::endl;
	fun2(e);

	vector<Exmpl> v(e, 2);
}
