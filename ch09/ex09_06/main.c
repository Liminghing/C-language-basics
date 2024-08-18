//
//  main.c
//  ex09_06
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    int *p = &a;
    double *pd;
    
    pd = p;
    printf("%lf\n",*pd);
    return 0;
}
