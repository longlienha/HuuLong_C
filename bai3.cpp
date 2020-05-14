#include <stdio.h>

int main(){
	int s=0;
	for(int i=0,cnt=0; cnt!=100 ; i++){
		if(i%2 != 0){
			cnt++;
			s=s+i;
		}
	}
	printf("tong 100 so le dau tien la: %d",s);
}
