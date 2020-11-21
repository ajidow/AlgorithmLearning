#include <cstdio>

using namespace std;

int c[500010];
int n,m;

int lowbit(int x)
{
	return x & (-x);
}

void update(int x,int y)
{
	while(x <= n)
	{
		c[x] += y;
		x += lowbit(x);
	}
}

int query(int x)
{
	int ans = 0;
	while (x > 0)
	{
		ans += c[x];
		x -= lowbit(x);
	}
	return ans;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i = 1; i <= n; ++i)
	{
		int k;
		scanf("%d",&k);
		update(i,k);
	}
	
	for(int i = 0; i < m; ++i)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a == 1)
		{
			update(b,c);
		}
		if(a == 2)
		{
			printf("%d\n",query(c) - query(b-1));
		}
	}
	
	return 0;
}
