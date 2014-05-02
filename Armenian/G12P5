#include <iostream>
using namespace std;
long long n,pat,m;
long long fact(long long n,long long m)
{
	long long j,res = 1;
	for(j = 2;j <= n;j++)
	{
		res*=j;
		res%=m;
	}
	return res%m;
}
int main()
{
	cin>>n>>m;
	if(n>=m)
		cout<<0<<endl;
	else
		if(n==3)
			cout<<fact(fact(fact(3,m),m),m)<<endl;
		else
			if(n>=4)
				cout<<0<<endl;
			else
				cout<<n%m<<endl;
	return 0;
}
