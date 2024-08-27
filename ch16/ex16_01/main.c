//
//  main.c
//  ex16_01
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int *pi;
    double *pd;
    
    pi = (int *)malloc(sizeof(int));
    if(pi == NULL) {
        printf("# 메모리가 부족합니다. \n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));
    *pi = 10;
    *pd = 3.4;
    
    printf("정수형으로 사용 : %d\n",*pi);
    printf("실수형으로 사용 : %.1lf\n",*pd);
    
    free(pi);
    free(pd);
    
    return 0;
}