#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	double res = a*c/(b*d);

	printf("%.2lf",res);
	return 0;
}