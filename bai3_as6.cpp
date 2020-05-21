#include <stdio.h>

int main(){
	int a=0,num=0,dem=0;
	printf("nhap vao so phan tu mang: ", &a);
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("nhap vao pha tu thu %d: ",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				i--;
				break;
			}
		}
	}
	printf("done");
	
	
}
