#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int k;
	int n;
	cin >> k >> n;

	vector<int> v;
	while(n){
		vector<int>::iterator iter = v.begin();
		*iter = n%10;
		n /= 10;
	}
	return 0;
}