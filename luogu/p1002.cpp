#include <cstdio>
#include <iostream>

using namespace std;

int ex,ey,mx,my;
int mp[25][25];
int vis[25][25];
long long ans;

void mark()
{
	mp[ex][ey] = 2;
	mp[mx][my] = 1;
	if(mx-1 >= 0 && my - 2 >= 0)
	{
		mp[mx-1][my-2] = 1;
	}
	if(mx+1 <= 20 && my-2 >= 0)
	{
		mp[mx+1][my-2] = 1;
	}
	if(mx+2 <= 20 && my-1 >= 0)
	{
		mp[mx+2][my-1] = 1;
	}
	if(mx+2 <= 20 && my + 1 <= 20)
	{
		mp[mx+2][my+1] = 1;
	}
	if(mx+1 <= 20 && my + 2 <= 20)
	{
		mp[mx+1][my+2] = 1;
	}
	if(mx-1 >= 0 && my+2 <=20)
	{
		mp[mx-1][my+2] = 1;
	}
	if(mx-2 >= 0 && my +1 <= 20)
	{
		mp[mx-2][my+2] = 1;
	}
	if(mx-2 >= 0 && my -1 >= 0)
	{
		mp[mx-2][my+2] = 1;
	}
}

void dfs(int x,int y)
{
	if(vis[x][y] == 1)
	{
		return;
	}
	vis[x][y] = 1;
	if(mp[x][y] == 1)
	{
		return;
	}
	
	if(mp[x][y] == 2)
	{
		ans++;
		return;
	}
	if(x + 1 <= 20)
	{
		dfs(x+1,y);
		vis[x+1][y] = 0;
	}
	if(y+1 <= 20)
	{
		dfs(x,y+1);
		vis[x][y+1] = 0;
	}
	
}
int main()
{
	scanf("%d %d %d %d",&ex,&ey,&mx,&my);
	mark();
	dfs(0,0);
	cout << ans;
	return 0;
}
