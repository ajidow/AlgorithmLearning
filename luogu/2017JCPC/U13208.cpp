#include <iostream>

using namespace std;

int n,k,r;
int situation;
int lines_now;
int cnt;
int ac;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> n >> k >> r;
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&situation);
			if (situation)
			{
				lines_now += situation;
				cnt++;
				if (lines_now >= k)
				{
					ac++;
					lines_now = 0;
				}
			}
			if (cnt == r)
			{

			}
			
		}
	}
	return 0;
}

/*I can't solve it yet.....*/