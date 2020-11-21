#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int K;
	 cin >> K;

	int sub1;
	int sub2;
	int sub3;
	bool mark = false;

	for (int i = 10000; i <= 30000; ++i)
	{

		sub1 = i / 100;
		sub2 = i % 10000 / 10;
		sub3 = i % 1000;
		if ((sub1 % K == 0)&&(sub2 % K == 0)&&(sub3 % K == 0))
		{
			cout << i << endl;
			mark = true;
		}
	}

	if (mark != true)
	{
		cout << "No";
	}

	return 0;
}
