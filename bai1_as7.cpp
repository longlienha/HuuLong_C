#include <stdio.h>

int main(){
	int arr[4][4],sum=0,dem=0;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("nhap phan tu %d-%d: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		sum=sum+arr[i][i];
	}
	
	printf("trung binh cong la: %f", (float)sum/4);
}
