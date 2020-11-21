#include <iostream>
#define DAYS 7
using namespace std;
int main(int argc, char const *argv[])
{
	int school[DAYS];
	int extra[DAYS];
	int i;
	for (i = 0; i < DAYS; ++i)
	{
		cin >> school[i];
		cin >> extra[i];
	}
	int mark = 0;
	for (i = 0; i < DAYS; ++i)
	{
      if (school[i] + extra[i] > 8)
      {
      	if (school[i] + extra[i] > school[mark] + extra[mark])
      	{
      		mark = i;
      	}
      }
	}
	if (school[mark] + extra[mark] < 8)
	{
		cout << "0";
	}else{
		cout << mark+1;
	}
	return 0;
}
