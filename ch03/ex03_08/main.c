//
//  main.c
//  ex03_08
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(void) {
    int income = 0;
    double tax;
    const double tax_rate=0.12;
    income =456;
    tax = income*tax_rate;
    printf("세금은 %.1lf입니다",tax);
    return 0;
}
