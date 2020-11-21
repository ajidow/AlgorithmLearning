#include <iostream>
#include <cstdio>

using namespace std;

char c;
// int hua,sb;
// int huawin,sbwin;
int tmphua,tmpsb;
int cnt = 0;
int get[100000];

int main(int argc, char const *argv[])
{
	// cout << "11:0" << endl;
	while(1)
	{
		c = getchar();
		if (c == 'E')
		{
			cout << tmphua << ":" << tmpsb << endl;
			break;
		}else if (c == 'W'){
			// hua++;
			tmphua++;
			cnt++;
			get[cnt] = 1;
		}else{
			// sb++;
			tmpsb++;
			cnt++;
			get[cnt] = -1;
		}
		if (tmphua >= 11 && tmphua - tmpsb >= 2)
		{
			cout << tmphua << ":" << tmpsb << endl;
			tmphua = 0;
			tmpsb = 0;
		}else if (tmpsb >= 11 && tmpsb - tmphua >= 2)
		{
			cout << tmphua << ":" << tmpsb << endl;
			tmphua = 0;
			tmpsb = 0;
		}
	}
	cout << endl;

	tmphua = 0;
	tmpsb = 0;
	// cout << "21:0" << endl;
	for (int i = 1;i <= cnt; ++i)
	{
		if (get[i] == 1){
			tmphua++;
		}else{
			tmpsb++;
		}
		if (tmphua >= 21 && tmphua - tmpsb >= 2)
		{
			cout << tmphua << ":" << tmpsb << endl; 
			tmpsb = 0;
			tmphua = 0;
		}else if (tmpsb >= 21 && tmpsb - tmphua >= 2)
		{
			cout << tmphua << ":" << tmpsb << endl;
			tmpsb = 0;
			tmphua = 0;
		}
	}

	cout << tmphua << ":" << tmpsb;
	return 0;
}

// #include<iostream>
// using namespace std;
// char ch;
// bool g[1000000];//记录比分，true表示华华胜，false表示输； 
// int a,tmpsb,cnt;//a,tmpsb存储比分； 
// int main()
// {
//     while(1)
//     {
//         ch=getchar();//一个字符一个字符读入； 
//         if(ch=='E')
//         {
//             cout<<a<<":"<<tmpsb<<endl;//输出当前比分； 
//             break;
//         }
//         if(ch=='W')
//         {
//             a++;cnt++;g[cnt]=true;//存到数组中，以便算21分制时再模拟一次； 
//         }
//         if(ch=='L')
//         {
//             tmpsb++;cnt++;
//         }
//         if(a>=11&&a-tmpsb>=2)
//         {
//             cout<<a<<":"<<tmpsb<<endl;
//             a=0;tmpsb=0;
//         }
//         if(tmpsb>=11&&tmpsb-a>=2)
//         {
//             cout<<a<<":"<<tmpsb<<endl;
//             a=0;tmpsb=0;
//         }
//     }
//     a=0;tmpsb=0;cout<<endl;//归零； 
//     for(int i=1;i<=cnt;i++)//过程与之前类似； 
//     {
//         if(g[i]) a++;
//         else tmpsb++;
//         if(a>=21&&a-tmpsb>=2)
//         {
//             cout<<a<<":"<<tmpsb<<endl;
//             a=0;tmpsb=0;
//         }
//         if(tmpsb>=21&&tmpsb-a>=2)
//         {
//             cout<<a<<":"<<tmpsb<<endl;
//             a=0;tmpsb=0;
//         }
//     }
//     cout<<a<<":"<<tmpsb<<endl;//输出最后一局比分； 
//     return 0;
// }