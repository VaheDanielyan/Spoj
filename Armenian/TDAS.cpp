//Kathalan naumers (2n)!/n!/(n+1)!
#include <iostream>
using namespace std;
long long GCD(long long a,long long b) {
  return b?GCD(b,a%b):a;
}
int main()
{
	long long a[102],b[102],i,n,j,k,sum = 1;
	cin>>n;
	for(i = 1;i <= n;i++)
	{
		a[i] = i + n;
	}
	for(i = 1;i <= n+1;i++)
	{
		b[i] = i;
	}
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= n+1;j++)
		{
			k = GCD(a[i],b[j]);
			a[i]/=k;
			b[j]/=k;
		}
	}
	for(i = 1;i <= n;i++)
	{
		sum*=a[i];
		sum%=1000000;
	}
	cout<<sum<<endl;
	return 0;
}

