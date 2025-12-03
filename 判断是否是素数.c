#include <stdio.h>
int main(){
	int x = 0;
	
	scanf("%d",&x);
	int i;
	(void) i;
	int isPrime = 1;  // x是素数
	for(int i=2;i<x;i++){
		//TODO
		if(x%i == 0){
			//TODO
			isPrime = 0;
		}
	}
	if(isPrime == 1){
		//TODO
		printf("x是素数");
	}else{
		printf("x不是素数");
	}
	return 0;
}
