#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
int T[6];//var_t,print_t,lock_t,unlock_t,end_t;
int Q;
int banned_q[10010];
int wait_q[10010];

int main()
{
	scanf("%d",&n);
	for(int i = 1; i <= 5; ++i)
	{
		scanf("%d",T[i]);
	}
	
	scanf("%d",&Q);
	
	return 0;
}
