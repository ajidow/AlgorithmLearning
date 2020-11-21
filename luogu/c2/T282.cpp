#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cnt += j;
		}
	}
	cout << cnt;
	return 0;
}