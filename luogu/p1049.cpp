#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int v,n;
int w[32];
int dp[20010];

int main()
{
	cin >> v;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> w[i];
	}
	
	for(int i = 0; i < n; ++i)
	{
		for(int j = v; j >= w[i]; --j)
		{
				dp[j] = max(dp[j],dp[j-w[i]]+w[i]);
		}
	}
	
	cout << v-dp[v];
	return 0;
}
