#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	for (int i = 1; i*i <= n; ++i)
	{
		cout << i*i << " ";
	}

	return 0;
}