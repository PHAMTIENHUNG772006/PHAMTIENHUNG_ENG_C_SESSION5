#include<stdio.h>
int main(){
	int n = 5;
	int m;
    do{
    printf("hay nhap so bat ki 1-10 : ");
	scanf("%d", &m);
	}while(n != m);
	   printf("chu mung ban da nhap dung so %d\n", m);
	return 0;
}
