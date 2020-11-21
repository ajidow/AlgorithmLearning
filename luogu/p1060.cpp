#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
int N,m;
int w[30];
int money[30];
int dp[50010];

int main()
{
	cin >> N >> m;
	for(int i = 0; i < m; ++i)
	{
		int a,b;
		cin >> a >> b;
		w[i] = a*b;
		money[i] = a;
	}	
	
	for(int i = 0; i < m; ++i)
	{
		for(int j = N; j >= money[i]; --j)
		{
			dp[j] = max(dp[j],dp[j-money[i]] + w[i]);
		}
	}
	cout << dp[N];
	return 0;
}
