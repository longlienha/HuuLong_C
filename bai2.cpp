#include <stdio.h>

int main(){
	int n=0,dem=0;
	do{
		printf("nhap so n: ");
		scanf("%d",&n);
	}while(n<0);
	
	for(;n!=0;){
		n=n/10;
		dem++;
	}
	printf("la so co %d chu so",dem);
}
