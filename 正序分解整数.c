/*题目要求
我们希望输入任何一个非负整数,他可以帮我们正序打出
例
输入:12345
输出:1 2 3 4 5
*/

/*
#include <stdio.h>
int main()
{
	int x;
	int i = 0;
	scanf("%d",&x);
	do{
		//TODO
		i = i*10 + x%10;
		x /= 10;
	}
	while(x > 0);
	while(i > 0){
		//TODO
		printf("%d ",i%10);
		i /= 10;
	}
	
	return 0;
}

这个代码似乎可以实现上面的例子,
以及4567,836442等等都可以,但是如果测试数据是700呢?
······
结果会是
7 
而不是
7 0 0

*/

//那么应该怎么做呢?
#include <stdio.h>
int main()
{
	int x;
	int mask = 1;
	scanf("%d", &x);
	int t = x;
	do{
		x /= 10;
		mask *= 10;
	}while(x > 9);
	x = t;
	printf("mask = %d\n", mask);
	do{
		int d = x / mask;
		printf("%d", d);
		if(mask > 9){
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	}while(mask > 0);
	printf("\n");
	return 0;
}

