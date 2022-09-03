#include <iostream>
#include <cmath>
using namespace std;
int q[8][8],i,k,j,x1,x2,u1,u2;
char str[2],str2[2];
int as(int a)
{
	return a<0?-a:a;
}
int main()
{
	int t,matrix[9][9];
	for(i = 1;i <= 8;i++)
	{
		k = 0;
		if(i%2==0)
			k = 1;
		for(j = 1;j <= 8;j++)
		{
			k++;
			matrix[i][j] = k%2;
		}
	}
	cin>>t;
	while(t--)
	{
		cin>>str>>str2;
		x1 = str[0]-'a'+1;
		u1 = str[1]-'0';
		x2 = str2[0]-'a'+1;
		u2 = str2[1]-'0';
		if(as(x1-x2)==as(u1-u2))
		{
			cout<<1<<endl;
			continue;
		}
		if((matrix[x1][u1]==1 && matrix[x2][u2]==0) || (matrix[x1][u1]==0 && matrix[x2][u2]==1))
		{
			cout<<0<<endl;
			continue;
		}
		for(int j = 1;j <= 8;j++)
			for(int k = 1;k <= 8;k++)
			{
				if((as(j-x2)==as(k-u2)) && (as(j-x1)==as(k-u1)))
				{
					cout<<char(j+64-'A'+'a')<<k<<endl;
					goto tuda;
				}
			}
		tuda:;
	}
	return 0;
}
