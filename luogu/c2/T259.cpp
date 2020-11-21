#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int cnt;
	cin >> cnt;

	int i;
	int mark = 0;
	for (i = 0; i < cnt; ++i)
	{
		cout << "wang";
		mark++;
		if (mark == 5)
		{
			cout << endl;
			mark = 0;
		}
	}
	return 0;
}