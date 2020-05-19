#include <stdio.h>

int main(){
	int a=0,dem=0;
	printf("nhap vao so phan tu mang: ", &a);
	scanf("%d",&a);
	int arr[a],min=arr[0];
	for(int i=0;i<a;i++){
		printf("nhap vao pha tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++){
		if(min>arr[i] && arr[i]>0){
			min=arr[i];
			dem++;
		}
	}
	if(dem==0){
		printf("khong co");
	}else printf("so lon nhat la: %d", min);
}
