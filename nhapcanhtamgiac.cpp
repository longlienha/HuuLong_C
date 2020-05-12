#include <stdio.h>

int main(){
	float a=0,b=0,c=0;
	printf("nhap canh 1: ");
	scanf("%f", &a);
	printf("nhap canh 2: ");
	scanf("%f", &b);
	printf("nhap canh 3: ");
	scanf("%f", &c);	
	for(;a<0||b<0||c<0||a+b<=c||a+c<=b||b+c<=a;){
		printf("khong phai tam giac!\n xin nhap lai\n");
		printf("nhap canh 1: ");
		scanf("%f", &a);
		printf("nhap canh 2: ");
		scanf("%f", &b);
		printf("nhap canh 3: ");
		scanf("%f", &c);
	}
	printf("xin chuc mung");
}
