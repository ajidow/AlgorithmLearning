#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int num[15];
	bool isRight;
	int i;
	int j;
	for (i = 123; i < 329; ++i)
	{
		num[1] = i%10;
		num[2] = i%100/10;
		num[3] = i/100;
		num[4] = i*2%10;
		num[5] = i*2/100;
		num[6] = i*2%100/10;
		num[7] = i*3%10;
		num[8] = i*3%100/10;
		num[9] = i*3/100;

		isRight = true;
		sort(num+1,num+10);
		for(j = 1 ;j <= 9 ;j++){
			if (num[j] != j)
			{
				isRight = false;
			}
		}
		if (isRight)
		{
			cout << i << " " << i*2 << " " << i*3 << endl;
		}
	}


	return 0;
}