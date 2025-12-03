#include <stdio.h>
int main()
{
	int bill = 0;
	int price = 0;
	printf("请输入票面：");
	scanf("%d",&bill);
	printf("请输入物品价格：");
	scanf("%d",&price);
	int amount = bill - price;
	if(amount<0){
		printf("您支付的金额不足");
	}else{printf("应该找您%d\n",amount);
	}
	
	return 0;
}
