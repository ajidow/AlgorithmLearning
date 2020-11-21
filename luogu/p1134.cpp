#include <iostream>

using namespace std;

int factor(int n)
{
	long long res = 1;
	for (int i = 1; i <= n; ++i)
	{
		res *= i;
		for(;;)
		{
			if (res % 10 == 0)
			{
				res /= 10;
			}else{
				break;
			}
		}
		res %= 100000;
	}
	res %= 10;
	return res;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	cout << factor(n);


	return 0;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     long long int n,ans=1;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         ans*=i;
//         while(ans%10==0) ans/=10;
//         ans%=1000000;
//     }
//     cout<<ans%10;
//     return 0;
// }
