//Simple Realization
#include <stdio.h>
int a[1000002],l[1000002];
int main() {
	int n,i,x;
	scanf("%d",&n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; ++i) {
		scanf("%d", &l[i]);
	}

	for (x = 0; x < n;)
	{
		long long sum = 0;
		for (i = 0; i < n; ++i)
		{
			int q = (x + i) % n;
			if (sum + a[q] >= l[q]) {
				sum += a[q] - l[q];
			}
			else {
				break;
			}
		}
		if (i == n) 
		{
			printf("%d\n",x+1);
			return 0;
		}
		x += i + 1;
	}
	printf("-1\n");
	return 0;
}


