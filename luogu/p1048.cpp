#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int t,m;
int time[110],value[110];
int dp[1010];

int main()
{
	cin >> t >> m;
	for(int i = 0; i < m; ++i)
	{
		cin >> time[i] >> value[i];
	}
	
	for(int i = 0; i < m; ++i)
	{
		for(int j = t; j >= time[i]; --j)
		{
			dp[j] = max(dp[j],dp[j-time[i]]+value[i]);
		}
	}
	
	cout << dp[t];
	return 0;
}
