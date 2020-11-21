#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin >> a >> b;

	if (a > b)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}

int res = 0 ;

	for (int i = a; i <= b; ++i)
	{
		res += i;
	}

	cout << res;
	return 0;
}