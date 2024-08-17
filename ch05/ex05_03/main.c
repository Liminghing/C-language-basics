//
//  main.c
//  ex05_03
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0, b = 0;
    
    if(a > 0){
        b = 1;
    }else if(a == 0){
        b = 2;
    }else{
        b = 3;
    }
    
    printf("b : %d\n",b);
    return 0;
}
