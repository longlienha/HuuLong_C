#include <Stdio.h>

int main(){
	int data[5] = {23,90,9,25,16},tmp=0;;
	
	for(int i=0,j=1;j<5;j++){
		i=j-1;
		tmp = data[j];
		while((i>=0) && (tmp < data[i])){
			data[i+1] = data[i];
			i--;
		}
		data[i+1]=tmp;
	}
	
	for(int i=0;i<5;i++){
		printf("%d ", data[i]);
	}
}
