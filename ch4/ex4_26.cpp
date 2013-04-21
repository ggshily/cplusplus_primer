#include <iostream>

using namespace std;

int main()
{
	char *cp;

	cin >> cp;

	while(*cp) { cout << *cp; ++cp; }

	return 0;

}
