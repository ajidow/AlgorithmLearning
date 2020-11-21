#include <iostream>
#include <cstdio>
using namespace std;
int MOD,m,tree[200010],MX,cnt;
int lowbit(int x){
	return x & (-x);
}
void update(int x,int y){
	while(x <= m){
		tree[x] = max(tree[x],y);
		x += lowbit(x);
	}
}
int query(int x){
	int ans = 0;
	while(x > 0){
		ans = max(ans,tree[x]);
		x -= lowbit(x);
	}
	return ans;
}
int main()
{
	scanf("%d %d",&m,&MOD);
	cnt = m;
	for(int i = 0; i < m; ++i){
		char c;
		cin >> c;
		if(c == 'Q'){
			int L;
			scanf("%d",&L);
			MX = query(cnt+L);
			printf("%d\n",MX);
		}
		if(c == 'A'){
			int n;
			scanf("%d",&n);
			n = (n+MX)%MOD;
			update(cnt--,n);
		}
	}
	return 0;
}
