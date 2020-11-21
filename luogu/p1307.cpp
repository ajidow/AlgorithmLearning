#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int backUp = n;
	int i;
	
	for ( i = 0; n != 0; ++i)
	{
		n /= 10;
	}
	int list[i];

	int cnt = i;

	for (i = 0; backUp != 0; ++i)
	{
		list[i] = backUp % 10;
		backUp /= 10;
	}

	int mark = 0;

	while(list[mark] == 0){
		mark++;
	}
	i = mark;

	if (list[i] < 0 )
	{
		cout << list[i];
		i++;
	}else if(list[i] == 0){
		i++;
	}

	for (i; i < cnt ; ++i)
	{
		if ( list[i] < 0 )
		{
			cout << -list[i];
		}else{
			cout << list[i];
		}
	}


	return 0;
}
