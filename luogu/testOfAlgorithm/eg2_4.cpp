#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// ios::sync_with_stdio(false);

	int n = 20;
	int s = 0;

	// cin >> n;
	for (int i = 1; i <=n; ++i)
	{
		int fact = 1;
		for(int j = 1;j <= i;j++){
			fact *= j;
		}
		s += fact;
	}
	cout << s%1000000;


	return 0;
}