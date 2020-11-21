#include <iostream>
#include <cstdio>

using namespace std;

int T,M;
int W[10010],V[10010];
int dp[100010];

int main()
{
	ios::sync_with_stdio(false);
	cin >> T >> M;
	for(int i = 1; i <= M; ++i)
	{
		cin >> W[i] >> V[i];
	}
	for(int i = 1; i <= M; ++i)
	{
		for(int j = T; j >= W[i]; --j)
		{
			dp[j] = max(dp[j],dp[j-W[i]]+V[i]);
		}
	 } 
	
	cout << dp[T];
	
	return 0;
}
