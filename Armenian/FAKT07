#include <stdio.h>
int p[45];
void factorize(int n){
	for(int i = 2; i*i <= n; ++i){
		while(n % i == 0){
			++p[i];
			n /= i;
		}
	}
	if(n > 1){
		++p[n];
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int q = 1;
	for(int i = 1; i <= n; ++i){
		factorize(i);
	}
	for(int i = 2; i <= 40; ++i){
		q *= (p[i] + 1);
	}
	printf("%d\n", q);
	return (0);
}
