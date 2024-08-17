//
//  main.c
//  ex04_11
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10, b=20;
    int res;
    
    res = (++a,++b);
    //res = ++a,++b;
    printf("a : %d,b : %d\n",a,b);
    printf("res : %d",res);
    
    return 0;
}
