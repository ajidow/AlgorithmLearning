#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int a[n];

	int i;

	for (i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::sort(a,a+n);

	for (i = 0; i < n; ++i)
	{
		if (a[i+1] == a[i])
		{
			a[i] = 0;
		}
	}

	int cnt = 0;

	for (i = 0; i < n; ++i)
	{
		if (a[i] != 0)
		{
			cnt++;
		}
	}

	std::cout << cnt << std::endl;
	for (i = 0; i < n; ++i)
	{
		if ( a[i] != 0 )
			std::cout << a[i] << " ";
	}
	return 0;
}
