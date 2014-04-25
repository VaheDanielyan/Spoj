#include <iostream>
#include <cstdio>
using namespace std;
int a[123456];
long long n,S,c[123456],pat=123456789;
long long interv(long long l,long long r)
{
	return c[r]-c[l-1];
}
int main() {
	long long i,b,e,m,tmp,j;
	cin>>n>>S;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=c[i-1]+a[i];
	}
	for(i=1;i<=n;i++)
	{
		b=i;e=n;
		while(e-b>1)
		{
			m=(b+e)/2;
			tmp=interv(i,m);
			if(tmp>=S) e=m;
			else b=m;
		}
		for(j=b;j<=e;j++) if(interv(i,j)>=S) break;
		if(j<=n && pat>j-i+1) pat=j-i+1;
	}
	if(pat==123456789) pat=0;
	cout<<pat<<endl;
	return 0;
}
