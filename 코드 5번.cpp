#include<stdio.h>
int main() {
	float sum = 0.0;
	int i;
	for (i=1; i<=10000; i++)
		sum = sum + 0.1;
	printf("\n == �Ǽ� 0.1�� ���� ���� ��� ==\n");
	printf("sum = %f \n\n", sum);
}
