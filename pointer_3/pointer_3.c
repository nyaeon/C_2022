#include<stdio.h>
int multi(int* a, int* b) {
	int result = *a * *b; 
	return result;
}
int main() {
	int x, y;

	printf("2개의 정수를 입력하시오");
	scanf_s("%d %d", &x, &y);

	int result = multi(&x, &y);
	printf("%d * %d = %d\n", x, y, result);

	return 0;
}