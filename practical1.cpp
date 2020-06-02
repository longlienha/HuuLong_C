#include <stdio.h>
#include <string.h>
void input(char s1[],char s2[]){
	printf("Nhap chuoi 1: ");
	scanf("%s", s1);
	printf("Nhap chuoi 2: ");
	scanf("%s", s2);
}

void concat(char s1[], char s2[]){
	strcat(s1," ");
	strcat(s1,s2);
}

int main(){
	char s1[100],s2[100];
	input(s1,s2);
	concat(s1,s2);
	printf("chuoi moi la: %s",s1);
}
