#include <stdio.h>

int main(){
	
	int A[4][3];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("nhap phan tu %d-%d: ",i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d", A[j][i]);
		}
		printf("\n");
	}
}
