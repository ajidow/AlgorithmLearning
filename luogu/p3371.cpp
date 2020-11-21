#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#define INF 2147483647
#define maxn 10010
#define maxm 500010

using namespace std;

int n,m,s,cnt = 0;
int dis[maxn];
int vis[maxn];
int len[maxm],to[maxm],next[maxm],first[maxm];

void addedge(int f,int t,int l)
{
	next[++cnt] = first[f];
	to[cnt] = t;
	len[cnt] = l;
	first[f] = cnt;
}

void spfa()//在线征婚，有意者qq :-)
{
	queue<int> q;
	for(int i = 0; i <= 10000; ++i)
	{
		dis[i] = INF;
		vis[i] = 0;
	}
	q.push(s);
	dis[s] = 0;
	vis[s] = 1;
	while(!q.empty())
	{
		int hd = q.front();
		q.pop();
		vis[hd] = 0;
		for(int i = first[hd]; i; i = next[i])
		{
			int u = to[i];
			if(dis[u] > dis[hd] + len[i])
			{
				dis[u] = dis[hd] + len[i];
				if(vis[u] == 0)
				{
					vis[u] = 1;
					q.push(u);
				}
			}
		}
	}
}

int main()
{
	scanf("%d %d %d",&n,&m,&s);
	for(int i = 1; i <= m; ++i)
	{
		int f,t,l;
		scanf("%d %d %d",&f,&t,&l);
		addedge(f,t,l);
	}
	
	spfa();
	
	for(int i = 1; i <= n; ++i)
	{
		if(s == i)
		{
			printf("0 ");
		}else{
			printf("%d ",dis[i]);
		}
	}
	return 0;
}
