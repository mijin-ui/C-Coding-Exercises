#include <stdio.h>
int main(){
	int a = 0;
	int n = 0;
	scanf("%d",&a);
	if(a> 999){//TODO
		n=4;
	}else if(a>99){
		//TODO
		n=3;
	}else if(a>9){
		//TODO
		n=2;
	}else{
		n=1;
	}
		
	printf("您输入的是%d位数\n",n);
	return 0;
}
