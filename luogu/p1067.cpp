#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int power;
	cin >> power;
	int num[power+1];
	//
	int i;
	for (i = 0; i < power+1; ++i)
	{
		cin >> num[i];
	}
	//
	int sub = power;

	if (num[0] == 1){
		cout << "x" << "^" << sub;
	}else if (num[0] == -1)
	{
		cout << "-x^" << sub;
	}else{
		cout << num[0] << "x" << "^" << sub;
	}
	sub--;

	for (i = 1; i < power-1; ++i)
	{
		if ( num[i] != 1 && num[i] != -1 ){
			if (num[i] > 0)
			{
				cout << "+" << num[i] << "x" << "^" << sub;
			}else if (num[i] < 0)
			{
				cout << num[i] << "x" << "^" << sub;
			}
		}else if (num[i] == 1)
		{
			cout << "+" << "x" << "^" << sub;
		}else if (num[i] == -1)
		{
			cout << "-" << "x" << "^" << sub;
		}
		sub--;
	}
	if (num[power-1] != 1 && num[power-1] != -1)\
	{
		if (num[power-1] < 0)
		{
			cout << num[power-1] << "x"; 
		}else if (num[power-1] > 0)
		{
			cout << "+" << num[power-1] << "x";
		}
	}else if (num[power-1] == 1)
	{
		cout << "+x";
	}else{
		cout << "-x";
	}

	if (num[power] > 0)
	{
		cout << "+" << num[power];
	}else if (num[power] < 0)
	{
		cout << num[power];
	}

	return 0;
}
