#include <stdio.h>
int n;
int main() 
{
	int i,x;
	scanf("%d",&n);
	if(n%4==1 || n%4==2){ printf("NO\n"); return 0;}
	printf("YES\n");
	if(n%4==0)
	{
		for(i=0;i<n;i++) 
		{
			scanf("%d",&x);
			if(x%4==2 || x%4==3) printf("-");
			else printf("+");
		}
		printf("\n");
	}
	if(n%4==3)
	{
		for(i=0;i<n;i++) 
		{
			scanf("%d",&x);
			if(x%4==1 || x%4==2) printf("-");
			else printf("+");
		}
		printf("\n");
	}
	return 0;
}


