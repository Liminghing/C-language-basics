//
//  main.c
//  ex05_exercise
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2;
    char ch;
    int res;
    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d",&num1,&ch,&num2);
    switch (ch) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        case '%':
            res = num1 % num2;
            break;
        default:
            res = 0;
            break;
    }
    printf("%d%c%d = %d",num1,ch,num2,res);
    return 0;
}
