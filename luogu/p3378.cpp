#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int,vector<int>,greater<int> >q;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		if(a == 1)
		{
			int b;
			cin >> b;
			q.push(b);
		}
		if(a == 2)
			cout << q.top() << endl;
		if(a == 3)
			q.pop();
	}
	
	return 0;
}

