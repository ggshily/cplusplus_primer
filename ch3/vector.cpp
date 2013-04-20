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

	//cout << text << endl;
	
	return 0;
}

