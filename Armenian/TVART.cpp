#include<iostream>
#include<cmath>
using namespace std;
long j[102];
int main()
{
	long t=0,n,i;
	cin>>n;
	for(i=9;i>=2;i--)
	{
		while(n%i==0) 
		{ 
			t++;
			n/=i;
			j[t]=i;
		}
	}
	if(n>1)
		cout<<0;
	else
	{
		for(i=t;i>=1;i--)
			cout<<j[i];
	}
	cout<<endl;
	return 0;
}
