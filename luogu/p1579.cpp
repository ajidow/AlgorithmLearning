#include <iostream>
#include <cstdio>

using namespace std;

int n;

bool isPrime(int x)
{
	if(x == 2 || x == 3 || x == 5)
	{
		return true;
	}else{
		for(int i = 7; i*i <= x; i += 2 )
		{
			if(x % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	scanf("%d",&n);
	
	for(long long i = 2;;++i)
	{
		for(long long j = i; n-j-i >= j; ++j)
		{
			if(isPrime(i) && isPrime(j) && isPrime(n-i-j))
			{
				cout << i << " " << " " << j << n-i-j;
				break;
			}
		}
	}
	
	return 0;
}
