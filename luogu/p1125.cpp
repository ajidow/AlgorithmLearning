#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
char a[101];
int b[101],total[101],er;
bool c[101];
int cmp(int x,int y)                      //比较
{
    if(x>y) return 1;
    else return 0;
}
int ps(int x)                               //判断质数的模板
{ 
    if(x==1) return 0;                  //一定要注意1不为质数
    if(x==2) return 1;
    int j=2;
    while(j<=sqrt(x)&&x%j!=0) j++;
    if(x%j==0) return 0;
    else return 1;
}
int main()
{
    cin>>a;
    int len=strlen(a);
    for(int i=0;i<len;i++)
     b[i+1]=a[i];                             //转化
    for(int i=1;i<=len;i++)
      if(c[b[i]]==0)
       {
        for(int j=i;j<=len;j++)
         if(b[i]==b[j]) 
          total[i]++;                          //记录
        c[b[i]]=1; 
        er++;    
       }
    sort(total+1,total+len+1,cmp);                    //比较
    if(ps(total[1]-total[er]))
     cout<<"Lucky Word"<<endl<<total[1]-total[er];
    else 
     cout<<"No Answer"<<endl<<"0";                      //输出
    return 0;
}