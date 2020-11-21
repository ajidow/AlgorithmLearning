#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int money,number;
int dp[32010];
int item[61],w[61],value[61];
int main()
{
	cin >> money >> number;
	for(int i = 0; i < number; ++i)
	{
		int v,p,q;
		cin >> v >> p >> q;
		if(q == 0)
		{
			w[i] = v*p;
			value[i] = v;
		}else{
			w[q] += v*p;
			value[q] += v;
		}
	}
	
	for(int i = 0; i < number; ++i)
	{
		for(int j = money; j >= value[i]; --j)
		{
			dp[j] = max(dp[j],dp[j-value[i]]+w[i]);
		}
	}
	
	cout << dp[money];
	return 0;
}
