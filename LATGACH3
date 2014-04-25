//Problem LATGACH3 _DanieV_
#include <iostream>
#include <cstdio>
#include <cstring>
#define ll long long
using namespace std;
ll d[35];
void init()
{
    d[0]=1;
    d[2]=3;
    for (int i=4;i<=34;i+=2)
    {
        d[i]=4*d[i-2]-d[i-4];
    }
}
int main()
{
    init();
    int n;
    while (scanf("%d",&n))
    {
        if (n<0) break;
        printf("%lld\n",d[n]);
    }
    return 0;
}
