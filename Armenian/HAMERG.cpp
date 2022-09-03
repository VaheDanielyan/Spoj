//Fibonacci Numbers
#include <iostream>
using namespace std;
long long n,a[82];
void fib_n()
{
	a[0]=2;
	a[1]=4;
	a[2]=6;
	for(int i=3;i<=80;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
}
int main()
{
	fib_n();
	cin>>n;
	cout<<a[n-1]<<endl;
	return 0;
}

