#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

struct node{
	int x;
	int y;
};

int mp[410][410];
int n,m,sx,sy;
bool vis[410][410];
int dx[4] = {1,-1,2,-2};
int dy[4] = {1,-1,2,-2};

void bfs(int x,int y)
{
	mp[x][y] = 0;
	vis[x][y] = 1;
	queue<node> Q;
	node hd;
	hd = (node){x,y};
	Q.push(hd);
	while(!Q.empty())
	{
		node neo;
		neo = Q.front();
		for(int i = 0; i < 4; ++i)
		{
			for(int j = 0; j < 4; ++j)
			{
				if(abs(dx[i]) != abs(dy[j]))
				{
					int nx = neo.x + dx[i];
					int ny = neo.y + dy[j];
					if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
					if(!vis[nx][ny])
					{
						node tmp = (node){nx,ny};
						Q.push(tmp);
						vis[nx][ny] = 1;
						mp[nx][ny] = mp[neo.x][neo.y]+1;
					}
				}
			}
		}
		Q.pop();
	}
}

int main()
{
	scanf("%d %d %d %d",&n,&m,&sx,&sy);
	memset(vis,0,sizeof(vis));
	memset(mp,-1,sizeof(mp));
	bfs(sx,sy);
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			printf("%-5d",mp[i][j]);
		}
		printf("\n");
	}
	return 0;
}
