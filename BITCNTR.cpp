#include <iostream>
using namespace std;
int T,n,count,res;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>n;
		res = n;count = 0;
		while(res)
		{
			count = (res%2==1)?count+1:count;
			res>>=1;
		}
		cout<<count<<endl;
	}
	return 0;
}

