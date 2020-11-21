#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int k;
	cin >> k;

	int n = 1;
	double s = 1.0;

	while( s <= k ){
		n += 1;
		s += 1.0/n;
	}
	cout << n;

	return 0;
}