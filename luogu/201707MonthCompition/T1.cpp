#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//

	long long N,x;
	cin >> N >> x;
	long long box[N];
	long long i;
	for (i = 0; i < N; ++i)
	{
		cin >> box[i];
	}

	//

	long long eat[N-1];
	for (i = 0; i < N-1; ++i)
	{
		eat[i] = 0;
	}

	//

	long long sumOfCandyInNearBoxes;
	long long mark = 3;
	for (i = 0; i < N-1; ++i)
	{
		sumOfCandyInNearBoxes = box[i] + box[i+1];

		if (sumOfCandyInNearBoxes - x >= 0)
		{
			eat[i] = sumOfCandyInNearBoxes - x;
			
			//

			if (box[i+1] >= eat[i])
			{
				mark = 1;
			}else if (box[i]  >= eat[i] && box[i])
			{
				mark = 0;
			}else{
				mark = 3;
			}


			//

			if (mark == 0)
			{
				box[i] -= eat[i];
			}else if (mark == 1)
			{
				box[i+1] -= eat[i];
			}else if (mark == 3)
			{
				box[i] -= (eat[i] - box[i+1]);
				box[i+1] = 0;
			}

			//
		}

	}

	//

//	for (i = 1; i < N-1; ++i)
//	{
//		if (eat[i] == eat[i-1])
//		{
//			eat[i] = 0;
//		}
//	}

	//
	long long res = 0;
	for ( i = 0; i < N - 1; ++i)
	{
		res += eat[i];
	}


	cout << res;

	return 0;
}

