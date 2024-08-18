//
//  main.c
//  ex09_02
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int *pa;
    
    pa = &a;
    *pa = 10;
    
    printf("포인터로 a값 출력 : %d\n",*pa);
    printf("변수명으로 a값 출력 : %d\n",a);
    return 0;
}
