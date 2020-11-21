#include <iostream>
#include <algorithm>

using namespace std;

typedef struct volunteer
{
	int k;
	int s;
}volunteer;

int main(int argc, char const *argv[])
{
	int n;
	int m;
	cin >> n >> m;

	volunteer v[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i].k >> v[i].s;
	}

	sort(v -> s,(v+n).s);

	return 0;
}