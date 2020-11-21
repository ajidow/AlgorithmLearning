#include <cstdio>
#include <iostream>
using namespace std;

int num[100010];
int cnt = 0;
int ans = 0x3f;
int dp[100010];
int main()
{
	while(scanf("%d",&num[++cnt]) != EOF)	continue;
	cnt--;
	for(int i = 1; i <= cnt; ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			if(dp[j] < dp[i])
			{
				dp[i] = max(dp[i],dp[j]+1);
			}
		}
	}
	
	for(int i = 1; i <= cnt; ++i)
	{
		ans = max(ans,dp[i]);
	}
	
	printf("%d",ans);
	
	return 0;
}
