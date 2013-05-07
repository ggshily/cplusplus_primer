#define f(x) x*x

#include <iostream>

using namespace std;

int main()
{
	int x = 3;

	cout << f(x++) << " " << f(++x) << " " << x << endl;

	return 0;
}
