#include <stdio.h>

int main(){
	int A[4][3],B[4][3],Sum[4][3],L[4][3];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("nhap vao phan tu %d %d cua ma tran A: ",i,j);
			scanf("%d", &A[i][j]);
			printf("nhap vao phan tu %d %d cua ma tran B: ",i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			Sum[i][j]=A[i][j]+B[i][j];
			L[i][j]=A[i][j]-B[i][j];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",Sum[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",L[i][j]);
		}
		printf("\n");
	}
	
}
