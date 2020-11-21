#include <iostream>

using namespace std;

int n,k;

int main()
{
	cin >> n;
	k = 0;
	do{
		n /= 5;
		k += n;
	}while(n >= 5);
	
	cout << n;
	
	
	return 0;
}
