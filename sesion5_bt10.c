#include<stdio.h>
int main(){
	int n;
	printf(" moi ban nhap moi so nguyen ");
	scanf("%d ", &n);
	if (n < 0) n = -n;
	printf("cac chu so trong so nguyen");
	while (n > 0) {
		printf("%d ", n % 10);
	    n /= 10;
	    cotin
	}
	printf("\n");
	return 0;
}
