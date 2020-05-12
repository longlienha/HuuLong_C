#include <stdio.h>

int main(){
	int n=0;
	printf("nhap n: ");
	scanf("%d", &n);
	for(;n<0;){
		printf("n nho hon 0 xin nhap lai: ");
		scanf("%d", &n);
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(i%3==0){
			s=s+i;
		}
	}
	printf("tong la: %d",s);
}
