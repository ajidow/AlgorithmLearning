#include <iostream>
#include <cstdio>

using namespace std;

int n,k;
int fa[50010*3];
int res = 0;

int find(int x)
{
	int r = x;
	while(fa[r] != r)
	{
		r = fa[r];
	}
	fa[x] = r;
	return r;
}

void join(int a,int b)
{
	int x = find(fa[a]);
	int y = find(fa[b]);
	if(x != y)
	{
		fa[x] = y;
	}
}

void eat(int tag,int x,int y)
{
	if(tag == 1)
	{
		if(find(x+n) == find(y) || find(x+2*n) == find(y))
		{
			res++;
			return;
		}
		join(x,y);
		join(x+n,y+n);
		join(x+2*n,y+2*n);//We are together.
	}
	if(tag == 2)
	{
		if(x == y)
		{
			res++;
			return;
		}
		if(find(x) == find(y) || find(x+2*n) == find(y))
		{
			res++;
			return;
		}
		join(x,y+2*n);
		join(x+n,y);
		join(x+2*n,y+n);
	}
}

int main()
{
	scanf("%d %d",&n,&k);
	for(int i = 0; i < 3*n; ++i)
	{
		fa[i] = i;
	}
	
	for(int i = 0; i < k; ++i)
	{
		int tag,x,y;
		scanf("%d %d %d",&tag,&x,&y);
		if(x > n || y > n)
		{
			res++;
		}else{
			eat(tag,x,y);
			//cout << res << "aaa" << endl; 
		}
	//	cout << res << "bbb" << endl;
	}
	
	printf("%d",res);
	
	return 0;
}
