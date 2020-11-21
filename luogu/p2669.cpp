#include <iostream>

using namespace std;

int res,i = 1,j,k;

int main(int argc, char const *argv[])
{
	cin >> k;
	int cnt = 0;
	while (true)
	{
		for ( j = 1; j <= i; ++j)
		{
			res += i;
			cnt++;
			if (cnt > k)
			{
				break;
			}
		}
		i++;
	}



	cout << res;
	return 0;
}
