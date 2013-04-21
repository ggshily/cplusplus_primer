#include <iostream>

using namespace std;


int main()
{
	const char *cp = "hello";

	int cnt = 0;

	//while(cp) { ++cnt; ++cp; };

	cout << cnt << endl;

	cnt = 0;

	while(*cp) { ++cnt; ++cp; };

	cout << cnt << endl;
}
