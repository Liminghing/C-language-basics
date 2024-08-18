//
//  main.c
//  ex09_04
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10,b =20;
    const int *pa = &a;
    
    printf("변수 a의 값 : %d\n",*pa);
    pa =&b;
    printf("변수 b의 값 : %d\n",*pa);
    pa =&a;
    a=20;
    printf("변수 a의 값 : %d\n",*pa);
    
    return 0;
}
