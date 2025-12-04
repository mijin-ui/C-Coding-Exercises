#include <stdio.h>
int main(){
	int x = 0;
	int cnt =0;
	for(x=1;cnt<=49;x++){
		//TODO
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
			cnt ++;
			printf("%d\t",x);
			if (cnt%5 == 0){
				printf("\n");
			}
		}
	}
	
	return 0;
}
