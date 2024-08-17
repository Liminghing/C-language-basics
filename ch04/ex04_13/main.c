//
//  main.c
//  ex04_13
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 12;
    
    printf("a & b : %d\n", a & b);
    printf("a ^ b : %d\n", a ^ b);
    printf("a | b : %d\n", a | b);
    printf("~a : %d\n", ~a);
    printf("a << 1 : %d\n", a<<1);
    printf("a >> 2 : %d\n", a>>2);
    
    return 0;
}
