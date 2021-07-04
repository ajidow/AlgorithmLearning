#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
struct P{
	string name;
	int year;
	int month;
	int day;
}people[110];

bool cmp(P a,P b)// cmp is the pivotal point.
{
	if (a.year != b.year)
	{
		return a.year < b.year;
	}else if (a.month != b.month)
	{
		return a.month < b.month;
	}else if (a.day != b.day)
	{
		return a.day < b.day;
	}else if (a.day == b.day)
	{
		return 1;
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> people[i].name >> people[i].year >> people[i].month >> people[i].day;
	}

	stable_sort(people,people+n,cmp);//use stable_sort to enable two people with the same birthday place as the question need.

	for (int i = 0; i < n; ++i)
	{
		cout << people[i].name << endl;	
	}
	return 0;
}
