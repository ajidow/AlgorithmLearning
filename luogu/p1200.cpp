//A = 65 '0' = 48 多减16
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string shootingStar;
	string troop;
	cin >> shootingStar >> troop;

	int StarLen = shootingStar.length();
	int troopLen = troop.length();

	int numStar[StarLen];
	int numTrp[troopLen];

	for (int i = 0; i < StarLen; ++i)
	{
		numStar[i] = shootingStar[i] - '0' - 16;
	}

	for (int i = 0; i < troopLen; ++i)
	{
		numTrp[i] = troop[i] - '0' - 16;
	}

	int resStar(1);
	int resTrp(1);

	for (int i = 0; i < StarLen; ++i)
	{
		resStar *= numStar[i];
	}

	for (int i = 0; i < troopLen; ++i)
	{
		resTrp *= numTrp[i];
	}

	resStar %= 47;
	resTrp %= 47;

	if (resStar == resTrp)
	{
		cout << "GO";
	}else{
		cout << "STAY";
	}



	return 0;
}
