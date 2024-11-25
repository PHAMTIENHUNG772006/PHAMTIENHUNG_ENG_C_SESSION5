#include<stdio.h>
int main(){
	int number;
	printf("moi ban nhap so tu 1- 10 de hien bang cuu chuong ; ");
	scanf("%d", &number);
	if((number<1) || (number>10)){
		printf("moi ban nhap lai du lieu");
		
	} else{
		printf(" ban cuu chuong cua %d la", number);
		for( int i=1;i<=10;i++){
			printf("%d + %d = %d \n", number, i, number + i);
		}
	}
	return 0;
}
