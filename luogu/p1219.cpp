#include <iostream>

using namespace std;

int board[14];
int visit[14];
int cn;
int numOfResult = 0;
int cntOfSolution = 0;

bool IsOk(int n,int i)
{
	if (n == 0)
	{
		return true;
	}

	for(int j = 0; j < n; ++j)
	{
		if (j - board[j] == n - i)
		{
			return false;
		}
		if (j + board[j] == n + i)
		{
			return false;
		}
	}

	return true;
}

void PrintN()
{
	for (int i = 0; i < cn; ++i)
	{
		for (int j = 0; j < cn; ++j)
		{
			if (j == board[i])
			{
				cout << j+1 << " ";
			}
		}
	}

	cout << endl;
}

void dfs(int level)
{
	if (level == cn)
	{
		numOfResult++;
		if (numOfResult <= 3)
			PrintN();
		return;
	}

	for (int i = 0; i < cn; ++i)
	{
		if (!visit[i] && IsOk(level,i))
		{
			visit[i] = 1;
			board[level] = i;
			dfs(level+1);
			visit[i] = 0;
		}

	}

}

int main(int argc, char const *argv[])
{
	cin >> cn;

	dfs(0);
	cout << numOfResult;
	return 0;
}