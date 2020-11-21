#include <cstdio>
#include <iostream>

using namespace std;

int n,m;

int main()
{
	scanf("%d %d",&n,&m);
	for(int i = 1; i <= m; ++i)
	{
		int v,p,q;
		scanf("%d %d %d",&v,&p,&q);
		if(q == 0)
		{
			weight[i] = v;
			value[i] = v*p;
		}else{
			weight[i] = v;
			tag[i] = q;
			value[i] = v*p;
		}
	}
	
	for(int i = 1; i <= m; ++i)
	{
		if(tag[i])
		{
			weight[i] += weight[tag[i]];
			value[i] += value[tag[i]];
		}
	}
	return 0;
}
