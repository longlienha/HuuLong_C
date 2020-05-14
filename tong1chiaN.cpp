#include <stdio.h>

int main(){
	float n=0, s=0;
	do{
		printf("nhap vao so tu nhien n: ");
		scanf("%f", &n);
	}while(n<0);
	
	for(float i=1; i<=n ; i++){
		s=s + 1/i;
	}
	
	printf("tong la %.2f", s);
}
