#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int number;
	vector<int> text;

	while(cin >> number)
	{
		text.push_back(number);
	}

	for(vector<int>::iterator iter = text.begin(); iter != text.end() - 1; ++iter)
	{
		if(iter == text.begin())
		{
			cout << (*iter + *(text.end() - 1)) << endl;
		}
		else
		{
			cout << (*iter + *(iter + 1)) << endl;
		}
	}
	
	return 0;
}

