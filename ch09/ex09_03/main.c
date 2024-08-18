//
//  main.c
//  ex09_03
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10, b = 15, total;
    double avg;
    
    int *pa,*pb;
    int *pt = &total;
    double *pg = &avg;
    
    pa = &a;
    pb = &b;
    
    *pt = *pa + *pb;
    *pg = * pt / 2.0;
    
    printf("두 정수의 값 : %d,%d\n",*pa,*pb);
    printf("두 정수의 함 : %d\n",*pt);
    printf("두 정수의 평균 : %.1lf\n",*pg);
    return 0;
}
