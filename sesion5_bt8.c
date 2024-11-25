#include<stdio.h>
int ucln(int a, int b){

    while (b != 0) {
 	int trungGian = b;
 	b = a % b;
    a = trungGian;
 }
    return a;
}
int bcnn(int a, int b) {
	return (a *b) / ucln(a, b);
}
int main(){
int n, m;
printf("hay nhap vao so thu nhat : ");
scanf("%d", &n);
printf("hay nhap vao so thu nhat : ");
scanf("%d", &m);
if(n<=0 || m<=0){
	printf("moi ban nhap lai du lieu");
	return 1;	
}
printf("boi chung nho nhat cua %d va %d la: %d", n, m, bcnn(n, m));
return 0;
}
