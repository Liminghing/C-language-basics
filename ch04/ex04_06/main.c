//
//  main.c
//  ex04_06
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 30;
    int res;
    
    res =  (a>10) && (a<20);
    printf("(a>10) && (a<20) : %d\n",res);
    
    res =  (a>10) || (a<20);
    printf("(a>10) || (a<20) : %d\n",res);
    
    res =  !(a>=30);
    printf("!(a>=30) : %d\n",res);
    return 0;
}
