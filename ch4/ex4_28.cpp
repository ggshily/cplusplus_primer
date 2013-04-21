#include <iostream>
#include <vector>
#include <cstddef>

using namespace std;

int main()
{
	vector<int> nums;

	int number;

	while(cin >> number)
		nums.push_back(number);
	
	size_t len = nums.size();
	int *ip = new int[len]();

	for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter)
	{
		*ip =  *iter;

		cout << *iter << " " << ip << endl;

		ip++;
	}
	
	cout << "lengh:" << len << endl;

	ip -= len;
	for(int *p = ip; p != ip + len; ++p)
	{
		cout << *p << endl;
		
	}

	return 0;
}
