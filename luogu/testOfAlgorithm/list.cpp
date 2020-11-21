#include <iostream>
#include <list>

using namespace std;

typedef list<int> ListInt;

int main(int argc, char const *argv[])
{
	ListInt list;
	ListInt::iterator iter;

	for (int i = 0; i < 100; ++i)
	{
		list.push_back(i);
	}

	for (int i = 100; i > 0; --i)
	{
		list.push_front(i);
	}

	list.sort();

	for (iter = list.begin();iter != list.end();++iter)
	{
		cout << *iter << " ";
	}
	
	return 0;
}
