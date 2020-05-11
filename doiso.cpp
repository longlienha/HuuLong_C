#include <stdio.h>

int main(){
	int a=0;
	printf("nhap vao 1 so: ");
	scanf("%d",&a);
	
	if(a>=0 && a<=9999){
		int bien=a;
		printf("so nghich dao la: ");
		if(bien >= 0){
			printf("%d",bien%10);
			bien=bien/10;
		}
		if(bien > 0){
			printf("%d",bien%10);
			bien=bien/10;
		}
		if(bien > 0){
			printf("%d",bien%10);
			bien=bien/10;
		}
		if(bien > 0){
			printf("%d",bien%10);
			bien=bien/10;
		}
	}else{
		printf("so vua nhap khong phai so nguyen duong co 4 chu so");
	}
}
