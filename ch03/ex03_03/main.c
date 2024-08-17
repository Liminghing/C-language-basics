//
//  main.c
//  ex03_03
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(void) {
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;
    
    printf("short형 변수의 출력 : %hd\n",sh);
    printf("int형 변수의 출력 : %d\n",in);
    printf("long형 변수의 출력 : %ld\n",ln);
    printf("long long형 변수의 출력 : %lld\n",lln);

    
    return 0;
}
