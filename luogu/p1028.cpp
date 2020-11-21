#include <iostream>

using namespace std;

int cnt = 0;
int dp(int n);

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int res;
	res = dp(n);

	cout << res;
	return 0;
}

int dp(int n)
{
	int i;
	cnt++;

	for (i = 1; i <= n/2; ++i)
	{
		cnt = dp(i);
	}

	return cnt;
}
