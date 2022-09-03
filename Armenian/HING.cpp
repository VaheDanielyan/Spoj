#include <iostream>
#include <algorithm>
using namespace std;
int a[5],i,b[120],answ,k,f,h,j;
int main()
{
	for(i = 0;i < 5;i++)
		cin>>a[i];
	int t = 0;
	sort(a,a+5);
	do
	{
		if(a[0]!=0)
			b[t++] = a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
	}
	while(next_permutation(a,a+5));
	for(i = 0;i <= t;i++)
	{
		for(j = i+1;j <= t;j++)
		{
			if(i!=j)
			for(k = j+1;k <= t;k++)
			{
				for(h = k+1;h <= t;h++)
				{
					if(k!=h)
						if(b[i]+b[j]+b[k]==b[h])					
							answ++;
				}
			}
		}
	}
	cout<<answ<<endl;
	return 0;
}
