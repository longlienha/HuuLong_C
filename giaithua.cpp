#include <stdio.h>

int main(){
	int n=0, s=1;
	do{
		printf("nhap vao so tu nhien n: ");
		scanf("%d", &n);
	}while(n<0);
	
	for(int i=1; i<=n ; i++){
		s=s*i;
	}
	
	printf("%d! = %d", n,s);
}
