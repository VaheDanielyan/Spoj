//Again fibonacci numbers
#include <iostream>
using namespace std;
long long fib_n(long long  n)
{
        if (n <= 2) return 1;
        long long x = 1;
        long long y = 1;
        long long ans = 0;
        for (int i = 3; i <= n; i++)
        {
                ans = x + y;
                x = y;
				ans=ans%15746;
                y = ans;
		}
		
        return ans;
}
int main()
{
	long long i=2,n; 
	cin >> n;
	if(n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	cout << fib_n(n+1) << endl;
	return 0;

}
