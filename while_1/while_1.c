#include <stdio.h>
main() {
	int num = 0, sum = 0, count = 0;
	while (num != -1 && count <= 10) {
		scanf_s("%d", &num);
		sum = sum + num;
		count = count + 1;
	}
	printf("%d", sum);
	return 0;
}