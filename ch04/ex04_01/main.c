//
//  main.c
//  ex04_01
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(void) {
    int a,b;
    int sum,sub,mul,inv;
    
    a=10;
    b=20;
    
    sum = a+b;
    sub = a-b;
    mul = a*b;
    inv = -a;
    
    printf("a의 값 : %d,b의 값 : %d\n",a,b);
    printf("덧셈 %d\n",sum);
    printf("뺄셈 %d\n",sub);
    printf("곱셈 %d\n",mul);
    printf("음수 %d\n",inv);
    return 0;
}
