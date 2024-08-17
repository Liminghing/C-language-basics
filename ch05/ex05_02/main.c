//
//  main.c
//  ex05_02
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    
    if(a >= 0)
    {
        a = 1;
    }
    else{
        a = -1;
    }
    printf("a : %d\n",a);
    return 0;
}
