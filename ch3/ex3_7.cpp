#include <iostream>

using namespace std;

int main()
{
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	if(s1 > s2)
	{
		cout << s2 << " is bigger" << endl;
	}
	else if(s1 < s2)
	{
		cout << s1 << " is bigger" << endl;
	}
	else
	{
		cout << "equal" << endl;
	}

	string::size_type len1 = s1.size();
	string::size_type len2 = s2.size();

	if(len1 < len2)
	{
		cout << s2 << " is longer" << endl;
	}
	else if(len1 > len2)
	{
		cout << s1 << " is longer" << endl;
	}
	else
	{
		cout << "same length" << endl;
	}

	return 0;
}
