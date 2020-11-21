#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	if (n < 2)
	{
		cout << "no";
	}else{
	for (int i = 2; i*i <= n ; ++i)
	{
		if (n%i == 0)
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
}
	return 0;
}
