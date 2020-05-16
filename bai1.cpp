#include <stdio.h>

int main(){
	int a=0,b=0,s=0;
	do{
		printf("nhap so a");
		scanf("%d",&a);
		printf("nhap so b");
		scanf("%d", &b);
	}while(b-a<0);
	
	for(a;a<b;a++){
		s=s+a;
	}
	printf("tong la: %d", s);
}
