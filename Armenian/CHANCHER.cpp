//Solution is C(n+k-1,n) = (n+k-1)!/n!/(k-1)! = (n+1)*(n+2)*(n+3)*...*(n+k-1)/1*2*3*...*k-1
#include <iostream>
using namespace std;
long long a = 1,b,n,k,i,j,up[40],down[40],gcd_num,carry;

long long gcd(long long a,long long b) // euclids algorithm
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
int main()
{
	cin >> n >> k;
	if(k==1)
	{
		cout << 1 << endl;
		return 0;
	}
	for(i = 1;i <= k-1 ;i++)
	{
		up[i] = n+i;
		down[i] = i;
	}
	for(i = 1;i <= k-1;i++)
	{
		
		for(j = 1;j <= k-1;j++)
		{
			gcd_num = gcd(up[i],down[j]);
			up[i]/=gcd_num;
			down[j]/=gcd_num;
		}
	}
	for(i = 1;i <= k-1;i++)
		if(up[i])
			a*=up[i];
	cout << a << endl;
	return 0;
}

