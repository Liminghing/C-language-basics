//
//  main.c
//  ex13_03
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
void assign10(void);
void assign20(void);
int a;
int main(int argc, const char * argv[]) {
    printf("함수 호출 전 a 값 : %d\n",a);
    
    assign10();
    assign20();
    
    printf("함수 호출 후 a 값 : %d\n",a);
    return 0;
}
void assign10(void){
    a = 10;
}
void assign20(void){
    int a;
    a = 20;
}
