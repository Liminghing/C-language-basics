//
//  main.c
//  ex10_02
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int ary[3];
    int *pa = ary;
    int i;
    
    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];
    
    for(i = 0 ; i < 3 ; i++){
        
        printf("%5d",pa[i]);
    }
    
    return 0;
}
