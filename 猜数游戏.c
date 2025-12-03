#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int random = rand()%100+1;
	int count = 0;
	int number = 0; 
	printf("我已经想好了一个1~100的数，来猜猜吧。\n");
	do{
		printf("请输入你猜的数：");
		scanf("%d",&number);
		count ++;
		if(random > number){
			//TODO
			printf("您猜的数小了。\n");
		}else if(random < number){
			//TODO
			printf("您猜的数大了。\n");
		}else{
			printf("您猜对了,您所猜的次数是%d\n",count);
		}
	}while(random != number);
	return 0;
}
