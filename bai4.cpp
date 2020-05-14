#include <stdio.h>

int main(){
	int n=0,cnt=0;
	do{
		printf("nhap vao so tu nhien n: ");
		scanf("%d", &n);
	}while(n<0);
	
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			cnt++;
		}
	}
	if(cnt==0){
		printf("day la so nguyen to!");
	}else printf("day khong phai la so nguyen to!");
}
