#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=0,tg=0;
	int *p;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	
	p=(int *)malloc(n*sizeof(int));
	
	for(int i=0 ; i<n; i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	//sx phan tu
	for(int i=0,j=1;j<n;j++){
		i=j-1;
		tg=*(p+j);
		while((i>=0) && (tg < *(p+i))){
			*(p+i+1) = *(p+i);
			i--;
		}
		*(p+i+1)=tg;
	}
	
	//them phan tu
	int n1=0;
	printf("nhap vao so n1: ");
	scanf("%d",&n1);
	
	p=(int *)realloc(p,n*sizeof(int));
	
	for(int i=n ; i<n+n1; i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	for(int i=0,j=1;j<n+n1;j++){
		i=j-1;
		tg=*(p+j);
		while((i>=0) && (tg < *(p+i))){
			*(p+i+1) = *(p+i);
			i--;
		}
		*(p+i+1)=tg;
	}
	
	//duyetmang
	
	for(int i=0;i<n+n1;i++){
		printf("%3d", *(p+i));
	}
}
