#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num,backup;
	cin >> num;
	backup = num;
	int res[3];

	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		res[i] = num % 10;
		num /= 10;
	}

	int sxhs = res[0]*res[0]*res[0]+res[1]*res[1]*res[1]+res[2]*res[2]*res[2];
	if (sxhs == backup)
	{
		cout << "yes";
	}else{
		cout << "no";
	}

	return 0;
}