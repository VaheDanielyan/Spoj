#include <iostream>
using namespace std;
int jam,n,m,i,mini,mn,t[100],z[100],y[100],t1[100],qan[100],j;
int main()
{
	cin>>m>>n;
	for(i = 1;i <= n;i++)
	{
		cin>>t[i]>>z[i]>>y[i];
		t1[i] = t[i];
	}
	for(i = 1;i<=m;i++)
	{
		mn = 2000000000;
		for(j = 1;j <= n;j++)
		{
			if(t1[j]<mn)
			{
				mini = j;
				mn = t1[j];
			}
		}
		jam = t1[mini];

		qan[mini]++;

		t1[mini] = t1[mini] + t[mini];

		if(qan[mini] % z[mini]==0)
			t1[mini] = t1[mini]+y[mini];
	}
	cout<<jam<<endl;
	return 0;
}
