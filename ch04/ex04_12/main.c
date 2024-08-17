//
//  main.c
//  ex04_12
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10, b = 20, res;
    
    res = (a > b) ? a : b;
    printf("큰값 : %d\n",res);
    return 0;
}
