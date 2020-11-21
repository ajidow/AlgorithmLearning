#include <queue>
#include <stack>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int N,E,D,F[31][101][101],Ans=1<<30;
int main(){
 //   freopen("in.txt","r",stdin);
 //   freopen("out.txt","w",stdout);
    scanf("%d%d%d",&N,&E,&D);
    memset(F,127,sizeof(F));
    F[N][E][E]=0;
    for (int i=N;i>=1;i--)
        for (int j=E;j>=0;j--)
            for (int k=E;k>=0;k--)
                for (int x=1;x<=10;x++){
                    if (j-x*x>=0 && k-x>=0) F[i][j-x*x][k-x]=min(F[i][j-x*x][k-x],F[i][j][k]+1);
                    if (k-x*x>=0) F[i-1][k-x*x][k-x]=min(F[i-1][k-x*x][k-x],F[i][j][k]+1);
                }
    for (int i=1;i<=N;i++)
        for (int j=0;j<=E;j++) Ans=min(Ans,F[i][j][E-D]);
    printf("%d",Ans);
 //   fclose(stdin); fclose(stdout);
    return 0;
}