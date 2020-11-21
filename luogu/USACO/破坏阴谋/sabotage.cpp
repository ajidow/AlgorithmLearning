#include <iostream>
#include <cstdio>
#include <algorithm>
#define maxn 100010

using namespace std;

int sum[maxn],milk[maxn];
int n;
double c[maxn];
double l = 0,r = 10001;
double m;
double mx[maxn],mi[maxn];

bool check()
{
		m = (r+l)/2.0;
		for(int i = 0;i <= n; ++i)
		{
			c[i] = sum[i]-m*i;
		}
		mi[1] = c[1];
		mx[n-1] = c[n-1];
		for(int i = 2; i <= n; ++i)
		{
			mi[i] = min(mi[i-1],c[i]);	
		}
		for(int i = n-2; i >= 1; --i)
		{
			mx[i] = max(mx[i+1],c[i]);
		}
		
		for(int i = 2; i <= n; ++i)
		{
			if(mx[i] - mi[i-1] > c[n])
			{
				return 0;
			}
		}
		return 1;
}

int main()
{
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i)
	{
		int a = 0;
		scanf("%d",&a);
		milk[i] = a;
		sum[i] = sum[i-1] + a;
	}
	
	for(int i = 1; i <= 60; ++i)
	{
		m = (l+r)/2.0;
		if(check())
		{
			l = m;
		}else{
			r = m;
		}
	}
	
	printf("%.3lf",l);
	return 0;
}
