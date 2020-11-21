#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int obs[10][10];
int vis[10][10];
int n,m;
int t;
int sx,sy;
int fx,fy;
int res;

void dfs(int s,int e)
{
	if(s == fx && e == fy)
	{
		res++;
		return;
	}

	if(vis[s][e])
	{
		return;
	}
	
	if(s != fx && e != fy)
	{
		vis[s][e] = 1;
		if(s-1 >= 0){
			dfs(s-1,e);
			vis[s][e] = 0;}
		if(e-1 >= 0){
			dfs(s,e-1);
			vis[s][e] = 0;}
		if(e+1 <= m){
			dfs(s,e+1);
			vis[s][e] = 0;}
		if(s+1 <= n){
			dfs(s+1,e);
			vis[s][e] = 0;}
	}
	
}

int main()
{	
	cin >> n >> m >> t;
	cin >> sx >> sy;
	cin >> fx >> fy;
	for(int i = 0; i < t; ++i)
	{
		int tmpx,tmpy;
		scanf("%d %d",&tmpx,&tmpy);
		obs[tmpx][tmpy] = 1;
	}
	
	dfs(sx,sy);	
	cout << res;	
	
return 0;
}