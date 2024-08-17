//
//  main.c
//  ex04_04
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 5 , b =5;
    int pre,post;
    
    pre = (++a) * 3;
    post = (b++) * 3;
    
    printf("증감 연산 후 초깃값 a = %d, b = %d\n",a,b);
    printf("전위형 : %d , 후위형 : %d\n",pre,post);
    
    return 0;
}
