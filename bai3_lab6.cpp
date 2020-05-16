#include <stdio.h>

int main(){
	int n=0,arr[100],x=0,dem=0;
	do{
		printf("nhap so pt: ");
		scanf("%d",&n);
	}while(n<0 && n>100);
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d", &arr[i]);
	}
	printf("nhap vao x: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			printf("co!");
			break;
		}
	}
	if(dem==0) printf("khong co!");
}
