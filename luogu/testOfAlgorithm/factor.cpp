#include <iostream>

using namespace std;

int factor(int n)
{
	if (n == 0)
	{
		return 1;
	}else{
		return factor(n-1)*n;
	}
}

int main(int argc, char const *argv[])
{
	int a[519647];
	int res = factor(10);
	cout << res;
	return 0;
}