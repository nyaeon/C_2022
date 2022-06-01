#include <stdio.h>
int main() {
	int arr[6] = { 10,20,30,40,50,60 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++) {
		printf("p = %p, ", p);
		printf("*p++ = %d, ", *p++);
		printf("*p = %d\n", (*p)++);
	}
	printf(" *p++ = %d\n", *p);
	printf(" *--p  = %d\n", *--p);
	printf(" *p = %d, *--p = %d",(*p)--, *p);

	return 0;

}