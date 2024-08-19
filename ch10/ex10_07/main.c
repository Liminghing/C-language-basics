//
//  main.c
//  ex10_07
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

void input_ary(double *pa,int size);
double find_max(double *pa,int size);

int main(int argc, const char * argv[]) {
    
    double ary[5];
    double max;
    int size = sizeof(ary)/sizeof(ary[0]);
    input_ary(ary,size);
    max = find_max(ary, size);
    printf("배열의 최대값 : %.1lf",max);
    return 0;
}
void input_ary(double *pa,int size){
    printf("%d개의 실수값 입력 : ",size);
    for(int i = 0 ; i < size ; i++){
        scanf("%lf",&pa[i]);
    }
}
double find_max(double *pa,int size){
    double max;
    max = pa[0];
    
    for(int i = 1 ; i < size ; i++){
        if(pa[i] > max) max = pa[i];
    }

    return max;
}
