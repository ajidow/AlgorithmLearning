#include <iostream> 

using namespace std; 

int n,m; 
int sum; 

 int dg(int a)
{
	if (a > 0){
	 	if (a % 10 == 2)
	 	{
			sum++; 
		}

		dg(a / 10);
	}
}


int main()
{ 
	cin >> n >> m; 

	int i;

	for(i = n; i <= m; i++)
	{
		dg(i); 
	}

	cout << sum; 

	return 0;
}
