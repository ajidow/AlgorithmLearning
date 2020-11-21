#include <iostream>
#include <cstdio>

using namespace std;

int n,m;
int matrix[110][110],kernal[110][110];
int h,w;

int main()
{
	scanf("%d %d",&n,&m);
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	scanf("%d %d",&h,&w);
	for(int i = 0; i < h; ++i)
	{
		for(int j = 0; j < w; ++j)
		{
			scanf("%d",&kernal[i][j]);
		}
	}
	
	return 0;
}
