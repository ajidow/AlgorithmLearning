#include <cstdio>
#include <iostream>
using namespace std;

int n;
struct node{
	char l,r,data;
};
node tree[30];

void dfs(char dt)
{
	if(dt == '*')
	{
		return;
	}
	for(int i = 0; i < n; ++i)
	{
		if(tree[i].data == dt)
		{
			printf("%c",dt);
			dfs(tree[i].l);
			dfs(tree[i].r);
		}
	}
	return;
}

int main()
{
	scanf("%d",&n);
	for(int i = 0; i < n; ++i)
	{
		cin>>tree[i].data>>tree[i].l>>tree[i].r;
	}
	
	dfs(tree[0].data);
	return 0;
}
