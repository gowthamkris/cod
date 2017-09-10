#include <stdio.h>

int main(){
	unsigned char ch1;		
	
	ch1=32; 
	while(ch1<=127){
		printf("%c [%03d] ",ch1,ch1);
		ch1++;
	}
	printf("\n");
	
	return 0;
}
