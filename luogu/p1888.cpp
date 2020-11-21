#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b);

int main(int argc, char const *argv[])
{
	int sin[3];
	int i;

	for ( i = 0; i < 3 ; ++i )
	{
		cin >> sin[i];
	}

	sort(sin,sin+3,compare);

	int a = sin[2];
	int c = sin[0];

	for(i = 2; a >= i; i++)
	{
       	if (a%i == 0 && c%i == 0)
       	{
       		a /= i;
       		c /= i;
       		i--;
       	}

	}

	cout << a << "/" << c;
	
	return 0;

}


bool compare(int a,int b){
	return a > b;
}