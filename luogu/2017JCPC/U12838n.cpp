#include <bits/stdc++.h>
using namespace std;
int mark[1000];
typedef struct {
    int left;
    int right;
    int speed;
    int cnt;
}boat;
boat a[1000];
int n,res,tmp1,tmp2,tmp;
int main()
{
    cin >> n;
        for(int i=0;i<n;i++) {
            cin >> a[i].speed;
            a[i].left=a[i].right=i;
            a[i].cnt=1;
        }
        for(int i=0;i<n-1;i++) {
            tmp1=a[mark[i]].left;
            tmp2=a[mark[i]].right;
            tmp=mark[i];
            if(tmp1==0) {
                if(a[n-1].speed>a[tmp2+1].speed) {
                    res+=(a[tmp2+1].speed-a[tmp].speed);
                    a[tmp2+1].left=a[tmp].left;
                    mark[i]=tmp2+1;
                } else {
                    res+=(a[n-1].speed-a[tmp].speed);
                    a[n-1].right=a[tmp].right;
                    mark[i]=n-1;
                }
            } else if(tmp2==n-1) {
                if(a[tmp1-1].speed>a[0].speed) {
                    res+=(a[0].speed-a[tmp].speed);
                    a[0].left=a[tmp].left;
                    mark[i]=0;
                } else {
                    res+=(a[tmp1-1].speed-a[tmpk].speed);
                    a[tmp1-1].right=a[tmp].right;
                    mark[i]=tmp1-1;
                }
            } else {
                if(a[tmp1-1].speed>a[tmp2+1].speed) {
                    res+=(a[tmp2+1].speed-a[tmp].speed);
                    a[tmp2+1].left=a[tmp].left;
                    mark[i]=tmp2+1;
                } else {
                    res+=(a[tmp1-1].speed-a[tmp].speed);
                    a[tmp1-1].right=a[tmp].right;
                    mark[i]=tmp1-1;
                }
            }
        }
        cout << res;
    
    return 0;
}