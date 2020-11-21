#include <iostream>

using namespace std;

int x[21];
int ans = 0;
int n,k;

int is_prime(int num)
{
	if (num == 1 || num == 0)
	{
		return 0;
	}
	if (num == 2)
	{
		return 1;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void dfs(int pos,int pps,int sum)
{
	if (!pos)
	{
		ans += is_prime(sum);
		return;
	}
	for(pps; pps <= n; pps++)
	{
		dfs(pos - 1, pps + 1, sum + x[pps]);
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];
	}
	dfs(k,0,0);

	cout << ans;
	return 0;
}

// #include<cstdio>
// int n,k,ans;
// int a[22];
// int is_prime(int n){
//     if(n == 1 || n == 0)return 0;
//     if(n == 2)return 1;
//     for(int i = 2; i*i <= n; i++)
//       if(n % i == 0)return 0;
//     return 1;
// }
// void dfs(int pos,int pps,int sum){
//     if(!pos) { ans +=is_prime(sum);return ;}
//     for(pps; pps <= n; pps++)dfs(pos -1,pps +1, sum + a[pps]);
// }
// int main(){
//     scanf("%d%d", &n,&k);
//     for(int i = 1; i <= n; i++)scanf("%d", &a[i]);
//     dfs(k,1, 0);
//     printf("%d\n", ans);
//     return 0;
// }