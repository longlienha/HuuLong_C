#include <stdio.h>

int main(){
	int n=0,arr[100];
	do{
		printf("nhap so pt: ");
		scanf("%d",&n);
	}while(n<0 && n>100);
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d", &arr[i]);
	}
	float tbc=0,dem=0;
	for(int i=0;i<n;i=i+2){
		if(arr[i]%2 != 0){
			tbc=tbc+arr[i];
			dem++;
		}
	}
	if(dem==0){
		printf("khong co so le nao!");
	}else printf("trung binh cong ca so le co trong mang la: %f",tbc/dem);
}
