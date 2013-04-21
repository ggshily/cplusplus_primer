#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums(10, 5);

	vector<int>::iterator mid = (nums.begin() + nums.end()) / 2;

	cout << *mid << endl;

	return 0;
}
