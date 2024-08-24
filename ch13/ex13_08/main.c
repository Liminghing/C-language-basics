//
//  main.c
//  ex13_08
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
int *sum(int,int);
int main(int argc, const char * argv[]) {
    int *resp;
    resp = sum(10,20);
    printf("두 정수의 합 : %d\n",*resp);
    
    return 0;
}
int *sum(int a,int b){
    static int res;
    res = a + b;
    return &res;
}
