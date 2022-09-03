#include <iostream>
using namespace std;
int i,fx,o,sum;
bool a[1000000];
int main()
{
	for(i=1;i<1000000;i++)
	{
		o=i;fx=0;
		while(o)
		{
			fx+=o%10;
			o/=10;
		}
		fx+=i;
		if(a[fx]==0)
		{
			a[fx]=1;
		}
	}
	for(i=1;i<1000000;i++)
	{
		if(a[i]==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}

