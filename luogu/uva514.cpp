#include <cstdio>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n;
int t[1010];

int main()
{
	while(scanf("%d",&n),n)
	{
		stack<int> s;
		while(1)
		{
			scanf("%d",&t[1]);
			if(t[1]==0)
			{
				break;
			}
			for(int i = 2; i <= n; ++i)
			{
				scanf("%d",&t[i]);
			}
			bool flag = true;
			int a=1,b=1;
			while(b<=n)
			{
				if(a == t[b])
				{
					a++;
					b++;
				}else if(!s.empty()&&s.top()==t[b])
				{
					s.pop();
					b++;
				}else if(a <= n)
				{
					s.push(a);
					a++;
				}else{
					flag = false;
					break;
				}
				
			}
			printf("%s\n",flag?"Yes":"No");
			
		}
		printf("\n");
	}
	
	return 0;
}
