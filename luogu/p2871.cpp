#include <iostream>

using namespace std;

int n,v;
int w[100000],d[100000],res[100000];

int isMax(int a,int b)
{
	return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
	cin >> n >> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> w[i] >> d[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = v; j >= w[i]; --j)
			res[j] = isMax(res[j],res[j-w[i]]+d[i]);
	}

	int ans = 0;

	for (int i = 0; i <= v; ++i)
	{
		if (res[i] > ans)
		{
			ans = res[i];
		}
	}


	cout << ans;
	
	return 0;
}