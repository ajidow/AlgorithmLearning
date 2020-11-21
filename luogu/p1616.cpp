#include <iostream>
#include <cstdio>

using namespace std;

int t,m;
int W[10010],V[10010];
int dp[100010];

int main()
{
	scanf("%d %d",&t,&m);
	for(int i = 1; i <= m; ++i)
	{
		scanf("%d %d",&W[i],&V[i]);
	}
	
	for(int i = 1; i <= m; ++i)
	{
		for(int j = W[i]; j <= t; ++j)
		{
			dp[j] = max(dp[j],dp[j-W[i]]+V[i]);
		}
	}
	
	printf("%d",dp[t]);
	
	return 0;
}
