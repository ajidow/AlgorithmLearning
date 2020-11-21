#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int t;
int fa[30010];
int num[30010];
int front[30010];

int my_abs(int x)
{
	if(x > 0)
	{
		return x;
	}else{
		return -x;
	}
}

int find(int x)
{
	if(fa[x] == x)
	{
		return x;
	}
	int r = find(fa[x]);
	front[x] += front[fa[x]];
	fa[x] = r;
	return r;
}

void join(int a,int b)
{
	int ra = find(a);
	int rb = find(b);

	front[ra] += num[rb];
	num[rb] += num[ra];
	num[ra] = 0;
	fa[ra] = rb;
}

void fun(char c,int x,int y)
{
	if(c == 'M')
	{
		join(x,y);
	}
	if(c == 'C')
	{
		if(find(x) != find(y))
			printf("-1\n");
		else
			printf("%d\n",my_abs(front[x] - front[y])-1);
	}
}

int main()
{
	scanf("%d",&t);
	for(int i = 0; i < 30000; ++i)
	{
		fa[i] = i;
		num[i] = 1;
		front[i] = 0;
	}
	for(int i = 0; i < t; ++i)
	{
		char C;
		int x,y;
		cin >> C >> x >> y;
		fun(C,x,y);
	}	
	
	return 0;
}
