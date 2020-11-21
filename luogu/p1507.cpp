#include <iostream>
#include <cstdio>
#define maxn 60
#define maxm 410

using namespace std;

int Vmax,Mmax;
int n;
int v[maxn],m[maxn],cal[maxn];
int dp[maxm][maxm];

int main()
{
	scanf("%d %d",&Vmax,&Mmax);
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d %d %d",&v[i],&m[i],&cal[i]);
	}
	
	for(int i = 1; i <= n; ++i)
	{
		for(int j = Mmax; j >= m[i]; --j)
		{
			for(int k = Vmax; k >= v[i]; --k)
			{
				dp[j][k] = max(dp[j][k],dp[j-m[i]][k-v[i]]+cal[i]);
			}
		}
	}
	
	printf("%d",dp[Mmax][Vmax]);
	
	return 0;
}
