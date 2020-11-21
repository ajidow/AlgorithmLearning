#include <cstdio>
#include <iostream>

using namespace std;

double a,b,c,d;
int ans;

double solve(double t)
{
	return a*t*t*t+b*t*t+c*t+d;
}

int main()
{
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	for(int i = -100; i <= 100; ++i)
	{
		double l = i;
		double r = i+1;
		double mid = (l+r)/2;
		double s1 = solve(l);
		double s2 = solve(r);
		if(!s1){
			printf("%.2lf ",l);
			ans++;
		}
		if(s1*s2<0)
		{
			while(r-l>=0.001)
			{
				mid = (l+r)/2;
				if(solve(l)*solve(mid)<=0)
				{
					r = mid;
				}
				if(solve(mid)*solve(r)<=0)
				{
					l = mid;
				}
			}
			printf("%.2lf ",r);
			ans++;
		}
	}
	return 0;
}
