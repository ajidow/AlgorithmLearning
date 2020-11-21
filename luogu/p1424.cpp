#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x; 
	long int n;
	cin >> x >> n;
	int cnt;
	int s = 0;
	for ( cnt = 0; cnt < n ; ++cnt)
	{
		if ( x == 6 )
		{
			cnt += 1;
			x = 1;
		}else if (x == 7)
		{
			x = 1;
		}else{
					s += 250;
					x++;
			}
	}

	cout << s;
	
	return 0;
}
