#include <iostream>
#include "Account.h"

void Account::rate(double rate)
{
	interestRate = rate;
}

double Account::initRate()
{
	return 0.0;
}

int main()
{
	int a;

	std::cin >> a;

	Account ac1;
}
