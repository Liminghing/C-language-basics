//
//  main.c
//  ex05_06
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int rank = 2,m = 0;
    switch(rank){
        case 1:
            m = 300;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:
            m = 10;
            break;
    }
    printf("m : %d\m",m);
    return 0;
}
