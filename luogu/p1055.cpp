#include <iostream>
#include <string>

using namespace std;

const int length = 14;

int main(int argc, char const *argv[])
{
	string isbnCode;
	cin >> isbnCode;

	int numIsbn[13]; 
	for (int i = 0; i < length; ++i)
	{
		numIsbn[i] = isbnCode[i] - '0';
	}

	int check = numIsbn[0]*1 + numIsbn[2]*2 + numIsbn[3]*3+ numIsbn[4]*4+ numIsbn[6]*5 + numIsbn[7]*6 + numIsbn[8]*7 + numIsbn[9]*8 + numIsbn[10]*9;
	check %= 11;
	if (check == 10)
	{
		check = 'X' - '0';
	}
	if (check == numIsbn[12])
	{
		cout << "Right";
	}else{
		cout<<numIsbn[0]<<'-'<<numIsbn[2]<<numIsbn[3]<<numIsbn[4]<<'-'<<numIsbn[6]<<numIsbn[7]<<numIsbn[8]<<numIsbn[9]<<numIsbn[10]<<'-'<<char(check+'0');//用char函数强制转换为字符类型 
	}

	return 0;
}
