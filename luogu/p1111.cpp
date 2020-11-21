#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;

struct node{
	int from;
	int to;
	int cost;
};

node village[100010];
int fa[1010];

int find(int x)
{
	int r = x;
	while(fa[x] != r)
	{
		r= fa[r];
	}
	fa[x] = r;
	return fa[x];
}

bool cmp(node a,node b)
{
	return a.cost < b.cost;
}

void kruscal()
{
	int cnt = 0,min_cost = 0;
	for(int i = 0; i < m; ++i)
	{
		int fx = find(village[i].from);
		int fy = find(village[i].to);
		if(fx != fy)
		{
			fa[fx] = fy;
			min_cost = max(min_cost,village[i].cost);
			cnt++;
		}
	}
	if(cnt >= n-1)
	{
		printf("%d",min_cost);
	}else{
		printf("-1");
	}
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i = 0; i < n; ++i)
	{
		fa[i] = i;
	}
	for(int i = 0; i < m; ++i)
	{
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		village[i] = (node){x,y,z};
	}
	
	sort(village,village+m,cmp);
	kruscal();
	
	return 0;
}
