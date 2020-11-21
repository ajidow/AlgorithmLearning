#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,s,a,b;
	cin >> n >> s;
	cin >> a >> b;
	if (n == 0)
	{
		cout << "0";
		return 0;
	}
	int x[n];
	int y[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> x[i] >> y[i];
	}

	// sort(y,y+n);

	// int res = 0;

	// for (int i = 0; i < n; ++i)
	// {
	// 	if (a + b >= x[i])
	// 	{
	// 		if (s - y[i] >= 0)
	// 		{
	// 			s -= y[i];
	// 			res++;
	// 		}else{
	// 			break;
	// 		}
	// 	}
	// }

	// cout << res;

	int strength[5001];
	int cntOfStr = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a + b >= x[i])
		{
			strength[cntOfStr] = y[i];
			cntOfStr++;
		}
	}

	sort(strength,strength+cntOfStr);

	int res = 0;

	for (int i = 0;i <= cntOfStr;i++)
	{
		if (s >= strength[i])
		{
			s -= strength[i];
			res++;
		}else{
			break;
		}
	}

	cout << res;

	return 0;
}


