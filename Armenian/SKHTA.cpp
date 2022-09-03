#include <iostream>
using namespace std;
long n,m;
int main()
{
	cin>>n;
	while(n > 2*(m+1)-1)
	{
		n/=2;
		m++;
	}
	cout<<m<<endl;
	return 0;
}
