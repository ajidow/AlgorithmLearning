#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[3];

	int i;
	for (i = 0; i < 3; ++i)
	{
		cin >> a[i];
	}
	int rice[3];
	for (i = 0; i < 3; ++i)
	{
		rice[i] = a[i];
	}

	int middle;
	sort(a,a+3);
	middle = a[1];
	
	int mark;

	for (i = 0; i < 3; ++i)
	{
		if (rice[i] == middle)
		{
			mark = i;
		}
	}

	switch(mark){
		case 0:
			cout << "left" << endl;
			break;
		case 1:
			cout << "middle" << endl;
			break;
		case 2:
			cout << "right" << endl;
	}

	cout << a[1];
	
	return 0;
}
