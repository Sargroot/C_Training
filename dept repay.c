#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    float principal, rate, years;
    float interest, amount, discount, final_settlement;

    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &years);

    interest = (principal * rate * years) / 100.0;
    amount = principal + interest;
    discount = (2.0 / 100.0) * interest;  // 2% discount on interest
    final_settlement = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", final_settlement);

    return 0;
}
