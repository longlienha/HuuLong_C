#include <stdio.h>

int main(){
	int a=0,num=0;
	printf("nhap vao so phan tu mang: ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("nhap vao pha tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<a;i++){
		if(arr[i]%2 != 0){
			num=arr[i];
		}
	}
	if(num == 0){
		printf("mang khong co so le");
	}else printf("so le cuoi la %d",num);
}
