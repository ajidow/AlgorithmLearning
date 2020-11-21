#include <bits/stdc++.h> 
using namespace std;  
int n,x,p=1,ll=0,ld=0,per=1;  
char ch;  
double dd,tt=0,d[10010],lalala[10010];  
int main()  
{  
    scanf("%d",&n);  
    d[++ld]=0;  
    d[++ld]=1000;  
    for (int i = 1; i <= n; ++i)
    {  
    	ch=getchar();  
   		while (ch!='T'&&ch!='D') ch=getchar();  
        scanf("%d",&x);  
        if (ch=='T') lalala[++ll]=x;  
        else d[++ld]=x;  
    }  
    sort(lalala+1,lalala+ll+1);  
    sort(d+1,d+ld+1);  
    for(int i = 1; i <= ld-1; ++i)
        {  
            dd=d[i];  
            while (dd<d[i+1]&&p<=ll&&tt+(d[i+1]-dd)*per>lalala[p])  
            {  
                dd+=(lalala[p]-tt)/per;  
                per++;  
                tt=lalala[p++];  
            }  
            tt+=(d[i+1]-dd)*per;  
            per++;  
        }  
        tt=(int)(tt+0.5);  
        printf("%.0lf\n",tt); 

        return 0; 
    }  