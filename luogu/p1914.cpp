#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int move;
	cin >> move;
	string password;
	cin >> password;

	for (int i = 0; i < password.length(); ++i)
	{
		for (int cnt = 0; cnt < move; ++cnt)
		{
			password[i] += 1;
			if (password[i] > 'z')
			{
				password[i] = 'a';
			}
		}
	}

	cout << password;
	return 0;
}