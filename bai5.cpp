#include <stdio.h>

int main(){
	int n=0,a1=1;
	do{
		printf("nhap so n");
		scanf("%d",&n);
	}while(n<0);
	
	for(int i=0,a=1,fibo=0;fibo<n;i++){
		a=a1;
		a1=fibo;
		fibo=a+a1;
	}
	printf("so gan nhat la: %d", a1);
}
