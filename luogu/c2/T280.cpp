#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int res = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (i%3 == 0)
		{
			res += i;
		}
	}

	cout << res;
	return 0;
}