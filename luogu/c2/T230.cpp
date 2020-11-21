#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i;
	cin >> i;
	int a;
	a = i%100;
	a /= 10;
	int b;
	b = i%10;

	cout << a+b;
	return 0;
}