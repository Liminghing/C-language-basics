//
//  main.c
//  ex09_08
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void swap(void);
int main(int argc, const char * argv[]) {
    int a = 10, b = 20;
    swap();
    printf("a : %d\n,b : %d\n",a,b);
    return 0;
}
void swap(void){
    int temp;
    temp = a;
    a = b;
    b =temp;
}
