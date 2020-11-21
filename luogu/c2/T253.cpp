#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int rice[3];
	cin >> rice[0] >> rice[1] >> rice[2];

	int t;

	if ( rice[1] < rice[0] )
	{
		t = rice[0];
		rice[0] = rice[1];
		rice[1] = t;
	}
	if (rice[2] < rice[1])
	{
		t = rice[1];
		rice[1] = rice[2];
		rice[2] = t;
	}
	if ( rice[1] < rice[0] )
	{
		t = rice[0];
		rice[0] = rice[1];
		rice[1] = t;
	}
	cout << rice[1];

	return 0;
}