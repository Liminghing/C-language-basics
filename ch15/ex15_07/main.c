//
//  main.c
//  ex15_07
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>
int sum (int,int);
int main(int argc, const char * argv[]) {
    int (*fp)(int,int);
    int res;
    
    fp = sum;
    //res = fp(10,20);
    res = (*fp)(10,20);
    printf("result : %d\n",res);
    return 0;
}
int sum (int a,int b){
    return a+b;
}
