#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,x;
	cin >> n >> x;

	int num[n];
	int i;
	for ( i = 0; i < n; ++i)
	{
		num[i] = i+1;
	}

	int count = 0;

	for (i = 0; i < n; ++i)
	{
		do
		{
			if (num[i] %10 == x)
			{
				count++;
				num[i] /= 10;
			}else{
				num[i] /= 10;
			}
		} while (num[i] > 0);
	}

	cout << count;

	return 0;
}
