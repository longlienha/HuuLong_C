 #include <stdio.h>
#include <math.h>
 
 int main(){
	float a,b,c,p=0,s=0;
	printf("nhap vao canh 1: ");
	scanf("%f",&a);	
	printf("nhap vao canh 2: ");
	scanf("%f",&b);
	printf("nhap vao canh 3: ");
	scanf("%f",&c);
	if(a<=0 || b<=0 || c<=0){
		printf("khong phai tam giac!");
	}else{
		if(a+b>c && a+c>b && b+c>a){
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c))/2;
		printf("dien tich la: %f\nchu vi la: %f",s,p*2);
		}else printf("khong phai tam giac!");
	}
}
