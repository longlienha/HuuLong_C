#include <stdio.h>

int main(){
	int n=0,s=0;
	do{
		printf("nhap so n: ");
		scanf("%d",&n);
	}while(n<0);
	
	for(;n!=0;){
		s=s+n%10;
		n=n/10;
	}
	printf("tong la: %d",s);
}
