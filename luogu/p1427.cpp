#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num[100];

	int cnt = -1;

	do
	{
		cnt++;
		cin >> num[cnt];
	} while (num[cnt]);

	for (1; cnt >0 ; --cnt)
	{
		cout << num[cnt-1] << " ";
	}

	return 0;
}
