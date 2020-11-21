#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int apple[10];
	int hand;
	int i;
	for ( i = 0; i < 10; ++i)
	{
		cin >> apple[i];
	}
	cin >> hand;
	int length = hand + 30;

	int cnt = 0;

	for (i = 0; i < 10; ++i)
	{
		if (apple[i] <= length )
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}