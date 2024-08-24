//
//  main.c
//  ex13_01
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
#include <string.h>

void assign(void);
int main(int argc, const char * argv[]) {
    auto int a =0 ;
    assign();
    printf("main함수 a : %d\n",a);
    
    return 0;
}
void assign(void){
    int a;
    a = 10;
    printf("assign함수 a : %d\n",a);
    
}
