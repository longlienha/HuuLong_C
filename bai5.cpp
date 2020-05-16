#include <stdio.h>

int main(){
	int n=0,fibo=1;
	do{
		printf("nhap vao so tu nhien n: ");
		scanf("%d", &n);
	}while(n<0);
	
	for(int i=3,a=1,a1=1; i<=n ; i++){
		a=a1;
		a1=fibo;
		fibo=a+a1;
	}
	printf("phan tu thu n la: %d", fibo);
}
