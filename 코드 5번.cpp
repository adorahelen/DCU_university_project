#include<stdio.h>
int main() {
	float sum = 0.0;
	int i;
	for (i=1; i<=10000; i++)
		sum = sum + 0.1;
	printf("\n == 실수 0.1을 만번 더한 결과 ==\n");
	printf("sum = %f \n\n", sum);
}
