//
//  main.c
//  ex13_06
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
void add_ten(int a);
int main(int argc, const char * argv[]) {
    int a = 10;
    add_ten(a);
    printf("a : %d\n",a);
    
    return 0;
}
void add_ten(int a){
    
    a = a + 10;
}
