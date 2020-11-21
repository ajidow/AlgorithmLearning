#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int n,c;
int dp[55][55][2];
int pos[55],sum[55],w[55];

int main()
{
	memset(dp,0x3f,sizeof(dp));
	scanf("%d %d",&n,&c);
	for(int i = 1; i <= n; ++i)
	{
		int p;
		scanf("%d %d",&p,&w[i]);
		pos[i] = p;
		sum[i] = sum[i-1]+w[i];
	}
	
	dp[c][c][0] = 0;
	dp[c][c][1] = 0;
	
	for(int j = c; j <= n; ++j)
	{
		for(int i = j-1; i > 0; --i)
		{
			dp[i][j][0] = min(dp[i+1][j][0]+(abs(pos[i]-pos[i+1]))*(sum[n]-sum[j]+sum[i]),dp[i+1][j][1]+(abs(pos[j]-pos[i]))*(sum[n]-sum[j]+sum[i]));
			dp[i][j][1] = min(dp[i][j-1][0]+(abs(pos[i]-pos[j]))*(sum[n]-sum[j-1]+sum[i-1]),dp[i][j-1][1]+(abs(pos[j-1]-pos[j]))*(sum[n]-sum[j-1]+sum[i-1]));
		}
	}
	
	cout << min(dp[1][n][0],dp[1][n][1]);
	return 0;
}
