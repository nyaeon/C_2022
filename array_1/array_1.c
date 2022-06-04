#include <stdio.h>
int main() {
    int product[4][2] = { 1,1000,2,1200,3,800,4,1750};
    int i, code, total, quantity = 0;

    printf("상품코드와 수량을 입력하세요>> ");
    scanf_s("%d %d", &code, &quantity);

    for (i = 0; i < 2; i= i+1) {
        if (product[code][0] = quantity) {
            break;
        }
    }

    total = quantity * product[code][-1];

    printf("상품코드 : %d\n", code);
    printf("수 량 : %d\n", quantity);
    printf("금 액 : %d", total);

    return 0;
}