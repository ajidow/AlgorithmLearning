#include <iostream>
#include <cstdio>
#include <vector>
#define maxn 500010

using namespace std;

//struct edge{
//	int from;
//	int to;
//};
vector<int> T[maxn];

int n,m,s;
int grand[maxn][23],depth[maxn],fa[maxn];

void dfs(int x)
{
	grand[x][0] = fa[x];//2^0祖先就是他爸爸
	while() 
}

int main()
{
	scanf("%d %d %d",&n,&m,&s);
	for(int i = 0; i < n; ++i)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		T[x].push_back(y);
		T[y].push_back(x);
	}
	
	for(int i = 0; i < m; ++i)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",lca(a,b));
	}
	
	return 0;
}
