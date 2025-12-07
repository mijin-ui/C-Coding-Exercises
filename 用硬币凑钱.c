//必须同时使用1角，2角，5角
//当我们找到一种组合时则直接输出(接力break)
#include <stdio.h>
int main ()
{
	int x;
	int one, two, five;
	int exit = 0;
	scanf("%d",&x);
	for( one = 1; one < x*10; one++) {
		//TODO
		for( two = 1; two < x*10/2; two++) {
			//TODO
			for( five = 1; five < x*10/5; five++) {
				//TODO
				if ( one + two*2 + five*5 == x*10){
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",
						one, two, five, x);
					exit = 1;
					goto out;
				}
			}
			if(exit == 1) break;
		}
		if(exit == 1) break;
	}
	out:
	return 0;
}
