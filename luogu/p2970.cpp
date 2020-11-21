#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct cow{
	int s;
	int e;
}moo[50001];

bool cmp(cow a,cow b)
{
	return a.e < b.e;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> moo[i].s >> moo[i].e;
	}
	
	sort(moo,moo+n,cmp);

	int position = 0,res = 0;

	for(int i = 0; i < n; ++i)
	{
		if (position <= moo[i].s)
		{
			position = moo[i].e;
			res++;
		}
	}

	cout << res;
	return 0;
}