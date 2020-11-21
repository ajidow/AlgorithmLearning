#include <iostream>

using namespace std;

int matches[10] = {6,2,5,5,4,5,6,3,7,6};

int num(int number)
{
	int cnt = 0;
	int i;
	for ( i = number; i != 0 ; i /= 10)
	{
		cnt += matches[i%10];
	}

	if(number==0)
	{
		cnt += matches[0]; 
	}

	return cnt;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int res = 0;

	int i,j;

	for (i = 0; i <= 1000 ; i++)
	{
		for (j = 0; j <= 1000; j++)
		{
			if (num(i) + num(j) + num(i + j) + 4 == n)
			{
				res++;
			}
		}
	}

	cout << res;
	
	return 0;
}


// #include <iostream>
// using namespace std;int nu[10]={6,2,5,5,4,5,6,3,7,6};//定义个辅助数组记录每个数字所需的火柴数
// int matches(int num){    //一个用来计算一个数需多少个火柴棒的函数
//          int i,k=0;       //K是火柴棒的数量
//          for(i=num;i!=0;i/=10)k+=nu[i%10];    //将这个数字每一位的火柴棒的数量都计算出来
//          if(num==0)k+=nu[0];      //有一种特殊情况：数字为0此时不会执行上述程序，所以加一个
//          return k;
// }
// int main(){
//     int i,j,all=0,n;    //all是符合条件的算式总数
//     cin>>n;     
//         for(i=0;i<=1000;i++)for(j=0;j<=1000;j++)if(matches(i)+matches(j)+matches(i+j)+4==n)all++;    //如果这个算式加起来的火柴棒总数刚好用完所有火柴棒就把数量往上加
//         cout<<all;
//         return 0;
//}
