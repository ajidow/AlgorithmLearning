#include <iostream>

using namespace std;

typedef struct Carpet
{
	int a;
	int b;
	int g;
	int k;	
}Cpt;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	Cpt c[n];

	int i;
	for (i = 0; i < n; ++i)
	{
		cin >> c[i].a >> c[i].b >> c[i].g >> c[i].k;
	}

	int x,y;
	cin >> x >> y;

	int res = -1;

	for (i = 0; i < n; ++i)
	{
		if (x >= c[i].a && x <= (c[i].a+c[i].g) && y >= c[i].b && y <= (c[i].b + c[i].k))
		{
			res = i+1;
		}
	}

	cout << res;

	return 0;
}
