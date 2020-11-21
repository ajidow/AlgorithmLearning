#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	ios::sync_with_stdio(false);
	cin >> m >> n;

	int res[10];
	for (int i = 0; i < 10; ++i)
	{
		res[i] = 0;
	}

	for (int i = m; i <= n; ++i)
	{
		int j = i;
		while(j){
			int last = j%10;
			switch(last){
				case 0:res[0] += 1;
					break;
				case 1:res[1] += 1;
					break;
				case 2:res[2] += 1;
					break;
				case 3:res[3] += 1;
					break;
				case 4:res[4] += 1;
					break;
				case 5:res[5] += 1;
					break;
				case 6:res[6] += 1;
					break;
				case 7:res[7] += 1;
					break;
				case 8:res[8] += 1;
					break;
				case 9:res[9] += 1;
					break;
			}
			j /= 10;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << res[i] << " ";
	}

	return 0;
}