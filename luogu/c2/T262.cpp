#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin >> a >> b;
	if (a == b)
	{
		cout << a;
	}else{
	
		if (a > b)
		{
			int tmp = b;
			b = a;
			a = tmp;
		}

		for (int i = a; i <= b ; ++i)
		{
			if (i % 2 == 0 || i % 3 == 0)
			{
				cout << i << " ";
			}
		}
	}

	return 0;
}