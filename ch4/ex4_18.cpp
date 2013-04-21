#include <cstddef>

using namespace std;

int main()
{
	const size_t array_size = 10;
	int iarray[array_size];

	for(int *ip = iarray, *end = iarray + array_size;
			ip != end; ++ip)
	{
		*ip = 0;
	}

	return 0;
}
