#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string word;
	vector<string> text;

	while(cin >> word)
	{
		text.push_back(word);
	}

	for(vector<string>::size_type ix = 0; ix != text.size(); ++ix)
	{
		for(string::size_type j = 0; j != text[ix].size(); ++j)
		{
			text[ix][j] = toupper(text[ix][j]);
		}
		cout << text[ix] << " ";
		if(ix > 0 && ix % 7 == 0)
		{
			cout << endl;
		}
	}

	return 0;
}

