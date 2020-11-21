#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int k;
	cin >> n >> k;
	int cig = 0;
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		cig++;
		if (cig == k)
		{
			i--;
			cig = 0;
		}
		res++;
	}

	cout << res;
	return 0;
}