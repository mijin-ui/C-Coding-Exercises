#include <stdio.h>
int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if(A == B) {
		printf("C");
	}else if(B == C) {
		printf("A");
	}else {
		printf("B");
	}
	return 0;
}
# include <stdio.h>
/*
这似乎是从结果思考的，是一种思考上更为简洁的方式，很有启发。
# include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d%d%d",&A, &B, &C);
	if(A != B && B ==C)
		printf("A");
	else if(B != A && A == C)
		printf("B");
	else if(C != A && A == B)
		printf("C");
	return 0;
}
*/


