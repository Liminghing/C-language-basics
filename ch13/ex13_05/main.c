//
//  main.c
//  ex13_05
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    register int  i;
    auto int sum = 0;
    for(i = 1 ; i <= 10000 ; i++){
        sum +=i;
    }
    printf("%d\n",sum);
    return 0;
}
