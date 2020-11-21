#include <cstdio>
#include <iostream>

using namespace std;

int n;
int HF[41][41];
int px,py;

int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	if(n % 2  != 0)
	{
		HF[1][(n/2 + 1)] = 1;
		px = 1;
		py = n/2 + 1;
	}
	for(int k = 2; k <= n*n; ++k)
	{
		if(px == 1 && py != n)
		{
			HF[n][py+1] = k;
			px = n;
			py = py+1;
		}else if(py == n && px != 1)
		{
			HF[px-1][1] = k;
			px = px-1;
			py = 1;
		}else if (px == 1 && py == n)
		{
			HF[px+1][py] = k;
			px = px+1;
			//py = py;
		}else if(px != 1 && py != n && HF[px-1][py+1] == 0)
		{
			HF[px-1][py+1] = k;
			px = px-1;
			py = py+1;
		}else{
			HF[px+1][py] = k;
			px = px+1;
			//py = py
		}
	}

	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cout << HF[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}