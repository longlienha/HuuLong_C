#include <stdio.h>

int main(){
	
	int a=0;
	printf("nhap vao so bat ki: ");
	scanf("%d", &a);
	int a1=a,a2=0;
	if(a>0){
		for(int i=0;a1>0;i++){
			a2=a2*10+a1%10;
			a1/=10;
		}
	}else{
		for(int i=0;a1<0;i++){
			a2=a2*10+a1%10;
			a1/=10;
		}
	}
	
	printf("so nguoc la: %d", a2);
}
