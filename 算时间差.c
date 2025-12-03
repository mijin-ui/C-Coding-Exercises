#include <stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	int t1 = 0;
	int t2 = 0;
	
	printf("请输入俩个时刻:");
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	t1 = hour2 - hour1;
	t2 = minute2 - minute1;
	if (t2<0){
		t2 = t2 + 60;
		t1 --;
	}
	printf("这俩个时刻的时间差是%d小时%d分\n",t1,t2);
	
	return 0 ;
	
	
}
