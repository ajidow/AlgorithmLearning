#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int N,M;
int w[110];
int dp[10010];

int main()
{
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> w[i];
	}
	dp[0] = 1;
	for(int i = 0; i < N; ++i)
	{
		for(int j = M; j >= w[i]; --j)
		{
			dp[j] = dp[j]+dp[j-w[i]];
		}
	}
		
	cout << dp[M];
	return 0;
}
