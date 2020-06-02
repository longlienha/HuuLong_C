#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=0,j=0;
	printf("nhap vao n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap vao phan tu thu %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	int max=0;
	for(int dem=0,i=0;i<n;i++){
		if(arr[i]>=0){
			dem++;
		}else dem=0;
		if(max<dem) max=dem;
	}
	
	printf("so so duong lien tiep: %d",max);
}
