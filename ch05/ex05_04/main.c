//
//  main.c
//  ex05_04
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 20,b =10;
    
    if(a > 10){
        
        if(b >= 0){
            b = 1;
        }else{
            b = -1;
        }
    }
    printf("a : %d, b : %d\n",a,b);
    return 0;
}
