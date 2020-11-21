#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double length;
	cin >> length;


	double swimed;
	double could = 2;
	int cnt;
	while( swimed < length )
	{
		swimed += could;
		could *= 0.98;
		cnt++;
	}

	
	cout << cnt;


	return 0;
}
