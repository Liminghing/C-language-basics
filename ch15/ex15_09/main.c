//
//  main.c
//  ex15_09
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    double b = 3.5;
    void *vp;
    vp = &a;
    printf("a : %d\n",*(int *)vp);
    vp = &b;
    printf("b : %.1lf\n",*(double *)vp);
    return 0;
}
