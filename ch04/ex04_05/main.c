//
//  main.c
//  ex04_05
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10, b = 20, c = 10;
    int res;
    
    res = (a>b);
    printf("a>b : %d\n",res);
    
    res = (a>=b);
    printf("a>=b : %d\n",res);
    
    res = (a<b);
    printf("a<b : %d\n",res);
    
    res = (a<=c);
    printf("a<=c : %d\n",res);
    
    res = (a==b);
    printf("a==b : %d\n",res);
    
    res = (a!=c);
    printf("a!-c : %d\n",res);
    return 0;
}
