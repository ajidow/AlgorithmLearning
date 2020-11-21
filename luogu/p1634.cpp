#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long int x,n;
	cin >> x >> n;
	unsigned long long int res = 1;
	unsigned long long int res2 = 1;
	for (unsigned long long int i = 0; i < n; ++i)
	 {
	 	res = res2;
	 	res *= x;
	 	res2 += res;
	 } 

	 cout << res2;
	return 0;
}