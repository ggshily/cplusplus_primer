#include <vector>

using namespace std;

int main()
{
	vector<int> nums(10, 5);

	for(vector<int>::iterator iter = nums.begin();
			iter != nums.end(); ++iter)
	{
		*iter = *iter * 2;
	}

	return 0;
}
