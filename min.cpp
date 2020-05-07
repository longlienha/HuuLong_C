 #include <stdio.h>

int main(){
	int a,b,c,min;
	printf("nhap vao so thu 1: ");
	scanf("%d",&a);
	printf("nhap vao so thu 2: ");
	scanf("%d",&b);
	printf("nhap vao so thu 3: ");
	scanf("%d",&c);
	min=a;
	if(min>b){
		min=b;
	}
	if(min>c){
		min=c;
	}
	printf("so nho nhat la: %d",min);
}
