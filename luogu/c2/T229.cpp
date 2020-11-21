#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i;
	cin >> i;
	i %= 100;

	cout << i/10;
	return 0;
}