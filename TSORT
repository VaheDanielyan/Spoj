#include <stdio.h>
int a[1000001],n,mx = -1;
int main()
{
	int res,i;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&res);
		a[res]++;
		if(res > mx)
			mx = res;
	}
	for(i = 0;i <= mx;i++)
	{
		if(a[i]!=0)
		{
			for(int j = 0; j< a[i];j++)
				printf("%d\n",i);
		}
	}
	return 0;
}
