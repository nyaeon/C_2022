#include<stdio.h>
int multi(int* a, int* b) {
	int result = *a * *b; 
	return result;
}
int main() {
	int x, y;

	printf("2���� ������ �Է��Ͻÿ�");
	scanf_s("%d %d", &x, &y);

	int result = multi(&x, &y);
	printf("%d * %d = %d\n", x, y, result);

	return 0;
}