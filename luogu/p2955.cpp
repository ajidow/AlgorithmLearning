#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string num;

	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; ++i)
	{
		cin >> num;
		if (num[num.length()-1]%2 == 0)
		{
			cout << "even" << endl;
		}else{
			cout << "odd" << endl;
		}
	}


	return 0;
}