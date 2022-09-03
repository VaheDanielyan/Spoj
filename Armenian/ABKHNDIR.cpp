#include <iostream>
#include <cstdio>
using namespace std;
char tmp,tmp2;
int n,sum=0,k=0,i;
long long pat[1000009],add[1000009];
int M[5000000];
int main()
{
	cin>>n;
	M[2000000]=1000008;
	pat[1000008]=0;
	add[1000008]=0;
	cin.get(tmp);
	for(i=1;i<=n;i++)
	{
		scanf("%c",&tmp);
		if(tmp=='a') sum++;
		else sum--;
		if(M[sum+2000000]>0)
		{
			add[i]=add[M[sum+2000000]]+1;
		}
		else
		{
			add[i]=0;
		}
		pat[i]=pat[i-1]+add[i];
		M[sum+2000000]=i;
	}
	cout<<pat[n]<<endl;
	return 0;
}
