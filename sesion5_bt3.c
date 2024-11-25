#include<stdio.h>
int main(){
	int n;
	int sum = 0;
    printf("moi ban nhap mot so nguyen duong \n");
    scanf("%d", &n);
    if(n <= 0 ){
    printf("hay nhap lai so nguyen duong");
    } else{
    for(int i = 1 ;i<=n;i++){
    	sum+=i;
	}
	printf("tong cac so tu 1 den %d la : %d \n", n, sum);
	}
return 0;
}
