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
	
	int *p;
	p=(int *)calloc(1,sizeof(int));
	for(int sum=0,i=0;i<n;i++){
		if(arr[i]>=0){
			sum=sum+arr[i];
		}else{
			*(p+j)=sum;
			sum=0;
			p=(int *)realloc(p,1*sizeof(int));
			j++;
		}
		if(i==n-1){
			p=(int *)realloc(p,1*sizeof(int));
			j++;
			*(p+j)=sum;
		}
	}
	
	int max=*(p+0);
	for(int i=1;i<=j;i++){
		if(max < *(p+i)){
			max=*(p+i);
		}
	}
	
	printf("so so duong lien tiep: %d",max);
}
