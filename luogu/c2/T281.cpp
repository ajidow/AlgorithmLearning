#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin >> a >> b;
	int cnt = 0;
	for (int i = a; i <= b; ++i)
	{
		int x = i/100;
		int y = (i%100)/10;
		int z = i%10;
		if ((x+y+z)%2 == 0)
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}