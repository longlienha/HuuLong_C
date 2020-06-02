#include <stdio.h>
#include <string.h>
int main(){
	char s1[100];
	printf("nhap vao chuoi: ");
	scanf("%s",s1);
	int a=0,e=0,i=0,o=0,u=0;
	for(int j=0;j<strlen(s1);j++){
		if(s1[j]=='a'){
			a++;
		}
		if(s1[j]=='e'){
			e++;
		}
		if(s1[j]=='i'){
			i++;
		}
		if(s1[j]=='o'){
			o++;
		}
		if(s1[j]=='u'){
			u++;
		}
	}
	printf("Number of characters: \n");
	printf("a= %d,e= %d,i= %d,o= %d,u= %d\n",a,e,i,o,u);
	printf("percentaages of total: \n");
	printf("a= %2f,e= %2f,i= %2f,o= %2f,u= %2f",(float)(a*100)/strlen(s1),(float)(e*100)/strlen(s1),(float)(i*100)/strlen(s1),(float)(o*100)/strlen(s1),(float)(u*100)/strlen(s1));
}
