#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,delta;
	float x1,x2;
	printf("nhap vao so a: ");
	scanf("%d",&a);	
	printf("nhap vao so b: ");
	scanf("%d",&b);
	printf("nhap vao so c: ");
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("pt vo so nghiem");
			}else{
				printf("pt vo nghiem");
			}
		}else{
			x1=float(-c)/b;
			printf("x=%f",x1);
		}
	}else{
		delta = b*b-4*a*c;
		if(delta<0){
			printf("vo nghiem");
		}else if(delta==0){
			x1=float(-b)/(2*a);
			printf("pt co nghiem kep x=%f",x1);
		}else{
			x1=(float)(-b-sqrt(delta))/(2*a);
			x2=(float)(-b+sqrt(delta))/(2*a);
			printf("x1= %f\n",x1);
			printf("x1= %f",x2);
		}
	}
} 
