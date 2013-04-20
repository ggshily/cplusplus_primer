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

	for(vector<int>::size_type ix = 0; ix != text.size() - 1; ++ix)
	{
		if(ix == 0)
		{
			cout << (text[0] + text[text.size() - 1]) << endl;
		}
		else
		{
			cout << (text[ix] + text[ix + 1]) << endl;
		}
	}
	
	return 0;
}

