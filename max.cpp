#include <stdio.h>

int main(){
	int a,b,c,max;
	printf("nhap vao so thu 1: ");
	scanf("%d",&a);	
	printf("nhap vao so thu 2: ");
	scanf("%d",&b);
	printf("nhap vao so thu 3: ");
	scanf("%d",&c);
	max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	printf("so lon nhat la: %d",max);
}
