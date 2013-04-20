#include <iostream>

using namespace std;

int main()
{
	string s1;
	cin >> s1;

	for(string::size_type ix = 0; ix < s1.size(); ++ix)
	{
		if(!ispunct(s1[ix]))
		{
			cout << s1[ix];
		}
	}
	cout << endl;

	return 0;
}
