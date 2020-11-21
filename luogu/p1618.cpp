#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

const char standard[] = "123456789";

int main(int argc, char const *argv[])
{
	int a,b,c;
	int flag(1);
	cin >> a >> b >> c;
	for (int i = 1; i <= 329; ++i)
	{
		char tmp[20];
		sprintf(tmp,"%d%d%d",a*i,b*i,c*i);
		sort(tmp,tmp+9);

		if (strcmp(standard,tmp) == 0)
		{
			flag = 0;
			cout << a*i << " " << b*i << " " << c*i << endl;
		}
	}

	if (flag)
	{
		cout << "No!!!";
	}
	return 0;
}