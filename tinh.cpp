#include <stdio.h>

int main(){
	float a,b;
	printf("nhap vao so a: ");
	scanf("%f",&a);
	printf("nhap vao so b: ");
	scanf("%f",&b);
	if(a>=b){
		printf("phep tinh: chia\nket qua %f",float(a)/b);
	}else printf("phep tinh: nhan\nket qua %f",float(a)*b);
}
