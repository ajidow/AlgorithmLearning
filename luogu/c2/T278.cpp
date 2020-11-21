#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int N[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> N[i];
	}

	int res = 0;

	for (int i = 0; i < n; ++i)
	{
		res += N[i];
	}

	cout << res;

	return 0;
}
