#include <stdio.h>

int main(){
	int a=0,b=0,ucln=0;
	do{
		printf("nhap so a");
		scanf("%d",&a);
		printf("nhap so b");
		scanf("%d", &b);
	}while(b<0 && a<0);
	
	for(int i=1,tg1=0;i<a;i++){
		if((a%i==0) && (b%i==0)){
			tg1=i;
		}
		if(tg1>ucln){
			ucln=tg1;
		}
	}
	printf("UCLN la: %d",ucln);
}
