#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int t[N];

	int i;

	for (i = 0; i < N; ++i)
	{
		cin >> t[i];
	}

	int cnt = 1;
	int max = 1;
	for (i = 0; i < N; ++i)
	{
		if (t[i+1] > t[i])
		{
			cnt++;
		}else{
			if (max < cnt)
			{
				max = cnt;
				cnt = 1;
			}else{
				cnt = 1;
			}
		}
	}

	cout << max;
	return 0;
}
