#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	int n;
	int love[m][n];
////////////////////////////////////////////////////////////////
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> love[i][j];
		}
	}
////////////////////////////////////////////////////////////////
	int res = 0;
	int i = 0;
	int j = 0;
	while(i < m-1 && j < n-1 && )
	{

		if (love[i][j+1] > love[i+1][j])
		{
			j += 1;
			res += love[i][j];
			love[i][j] = -1;
		}else if (love[i][j+1] == love[i+1][j])
		{
			if (love[i][j+2] > love[i+2][j])
			{
				j += 1;
			}else{
				i += 1;
			}
			res += love[i][j];
			love[i][j] = -1;
		}else{
			j += 1;
			res += love[i][j];
			love[i][j] = -1;
		}

	}
////////////////////////////////////////////////////////////////
	while(i > 0 && j > 0)
	{

		if (love[i][j-1] > love[i-1][j])
		{
			j -= 1;
			res += love[i][j];
		}else if (love[i][j-1] == love[i-1][j])
		{
			if (love[i][j-2] > love[i-2][j])
			{
				j -= 1;
			}else{
				i -= 1;
			}
			res += love[i][j];
		}else{
			j -= 1;
			res += love[i][j];
		}

	}
////////////////////////////////////////////////////////////////
	cout << res;
	return 0;
}
