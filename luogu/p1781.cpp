#include <cstdio>
#include <cstring>
#include <string>
int main()
{
    char n,m=0,vote[20][125],*president;
    scanf("%d",&n);
    while(m<n)
    scanf("%s",vote[m++]);
    for(president=vote[m=--n];n--;)
    if(strlen(president)<strlen(vote[n])|| strlen(president)==strlen(vote[n])&& strcmp(president,vote[n])<0)
    president=vote[m=n];
    return !printf("%d\n%s\n",m+1,president);
}