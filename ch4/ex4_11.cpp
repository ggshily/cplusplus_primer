#include <iostream>

using namespace std;

int main()
{
	int *ip;
	
	ip = 0;

	//cout << *ip << endl;

	int x = 0;

	ip = &x;

	cout << *ip << endl;

	cout << *(ip + 1) << endl;

	//ip = 1; // comiple error
}
