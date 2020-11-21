#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int num[n];
	
	for(int i = 0;i < n; ++i){
		cin >> num[i];
	}
	
	int cnt = 0;
	int maxCnt = 0;
	for (int i = 0; i < n-1; ++i)
	{

		if (num[i] == num[i+1] - 1)
		{
			++maxCnt;
		}else{
			if (maxCnt > cnt)
			{
				cnt = maxCnt;
				maxCnt = 0;
			}else{
				maxCnt = 0;
			}
		}
		

	}

	cout << cnt+1;
	return 0;
}
