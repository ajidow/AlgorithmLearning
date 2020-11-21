#include <bits/stdc++.h>
using namespace std;

double d[10100],lalala[10100];
int ll = 0;
int ld = 0;
int p = 1;
int per = 1;
char c;
int x;
double dd,tt = 0;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	
	d[++ld] = 0;
	d[++ld] = 1000;

	for (int i = 1; i <= n; ++i)
	{
		c = getchar();
		while(c != 'T' && c != 'D')
			c = getchar();
		cin >> x;
		if (c == 'T')
		{
			lalala[++ll] = x;
		}else{
			d[++ld] = x;
		}
	}

	sort(lalala,lalala+ll);
	sort(d,d+ld);

	for (int i = 1; i <= ld-1; ++i)
	{
		dd = d[i];
		while (dd < d[i+1] && p <= ll && tt + (d[i+1] - dd)*per > lalala[p]){
			dd += (lalala[p]-tt)/per;
			per++;
			tt = lalala[p++];
		}
		tt += (d[i+1] - dd)*per;
		per++;
	}

	tt += (int)(tt+0.5);

	// cout <<
	printf("%.0lf",tt);

	return 0;
}

