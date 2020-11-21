#include <bits/stdc++.h>

/*蒟蒻瞎写的代码*/

using namespace std;

int n;
// int speed[1000][1000];
long long res;
int tmp;
typedef struct
{
	int left;
	int right;
	int speed;
	int cnt;
}boat;

boat boat1[1000];
int mark[1000];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> boat1[i].speed;
		boat1[i].left = i;
		boat1[i].right = i;
		boat1[i].cnt = 1;
		// boat1[i].position = i;
	}//感觉这一块用OOP写会更直观


	int tmpl,tmpr,tmp;

	for (int i = 0; i < n-1; ++i)
	{
		tmp = mark[i];
		tmpl = boat1[mark[i]].left;
		tmpr = boat1[mark[i]].right;
		if (tmpl == 0)
		{
			if (boat1[n-1].speed > boat1[tmpr+1].speed)
			{
				res += (boat1[tmpr+1].speed - boat1[tmp].speed);
				boat1[tmpr+1].left = boat1[tmp].left;
				mark[i] = tmpr+1;
			}else{
				res += (boat1[n-1].speed - boat1[tmp].speed);
				boat1[n-1].right = boat1[tmp].right;
				mark[i] = n-1;
			}
		}else if (tmpr == n-1)
		{
			if(boat1[tmpl-1].speed>boat1[0].speed) 
			{
                res+=(boat1[0].speed-boat1[tmp].speed);
                boat1[0].left=boat1[tmp].left;
                mark[i]=0;
            }else{
                res+=(boat1[tmpl-1].speed-boat1[tmp].speed);
                boat1[tmpl-1].right=boat1[tmp].right;
                mark[i]=tmpl-1;
            }
		}else{
			 if(boat1[tmpl-1].speed>boat1[tmpr+1].speed) {

                    res+=(boat1[tmpr+1].speed-boat1[tmp].speed);

                    boat1[tmpr+1].left=boat1[tmp].left;

                    mark[i]=tmpr+1;

                } else {

                    res+=(boat1[tmpl-1].speed-boat1[tmp].speed);

                    boat1[tmpl-1].right=boat1[tmp].right;

                    mark[i]=tmpl-1;

                }
		}
	}

	cout << -res;
	return 0;
}