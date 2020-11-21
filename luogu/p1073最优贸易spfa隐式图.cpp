#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#define INF (1<<30)

using namespace std;

int n,m;
int value[100010];
int dis[100010*3+1];
bool vis[100010*3+1];
struct node{
	int to;
	int len;
};
vector<node> mp[100010*3+1];

void spfa()
{
	queue<int> q;
	q.push(1);
	for(int i = 0; i <= n; ++i)
	{
		dis[i] = -INF;
	}
	vis[1] = 1;
	dis[1] = 0;
	while(!q.empty())
	{
		int hd = q.front();
		q.pop();
		vis[hd] = 0;
		for(int i = 0; i < mp[hd].size(); ++i)
		{
			node neo = mp[hd][i];
			if(dis[neo.to] < dis[hd]+neo.len)
			{
				dis[neo.to] = dis[hd]+neo.len;
				if(vis[neo.to] == 0)
				{
					q.push(neo.to);
					vis[neo.to] = 1;
				}
			}
		}
	}
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d",&value[i]);
	}

	for(int i = 1; i <= m; ++i)
	{
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		mp[x].push_back((node){y,0});
		mp[x+n].push_back((node){y+n,0});
		mp[x+2*n].push_back((node){y+2*n,0});
		mp[x].push_back((node){y+n,-value[x]});
		mp[x+n].push_back((node){y+2*n,value[x]});
		if(z == 2)
		{
			mp[y].push_back((node){x,0});
			mp[y+n].push_back((node){x+n,0});
			mp[y+2*n].push_back((node){x+2*n,0});
			mp[y].push_back((node){x+n,-value[y]});
			mp[y+n].push_back((node){x+2*n,value[y]});
		}
	}
	mp[n].push_back((node){3*n+1,0});
	mp[3*n].push_back((node){3*n+1,0});
	n = 3*n+1;
	spfa();
	
	printf("%d",dis[n]);
	
	return 0;
}
