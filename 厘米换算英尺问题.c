#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	double b = a/30.48;
	int c = b;
	int e = (b-c)*12;
	printf("%d %d",c,e);
	
	return 0;
}
