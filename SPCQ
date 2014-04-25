#include <iostream>
#include <cmath>
using namespace std;
unsigned long long n,res,sum,t;
bool SumDig(long long n)
{
	unsigned long long tmp = n,digs = 0;
	while(tmp)
	{
		digs += tmp%10;
		tmp/=10;
	}
	if(n%digs==0)
		return true;
	else
		return false;
}
int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n;
		while(SumDig(n) == false)
		{
			n++;
		}
		cout << n <<endl;
	}
	return 0;
}
