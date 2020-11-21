#include <iostream>
using namespace std;
int c,h,v[5010];long long dp[50010];
int main()
{
	ios::sync_with_stdio(false);
	cin >> c >> h;
	for(int i = 1; i <= h; ++i)
		cin >> v[i];
	for(int i = 1; i <= h; ++i)
		for(int j = c; j >= v[i]; --j)
		{
			dp[j] = max(dp[j],dp[j-v[i]]+v[i]);
			if(dp[j] == c)
			{
				cout << c;
				return 0;
			}
		}
			
	cout << dp[c];
	return 0;
}
