#include<stdio.h>
int main(){
    int i, j;
    
    
	//printf("moi ban nhap so tu 1- 10 de hien bang cuu chuong : ");
	//scanf("%d", &number);
	for( int i=1;i<=9;i++) {
		printf("bang cuu chuong %d\n", i);
		for(int j=1;j<=9;j++){
			printf("%d + %d = %d \n", i, j, i + j);
		}
		printf("\n");
	}
	return 0;
}
