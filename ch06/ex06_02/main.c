//
//  main.c
//  ex06_02
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 1;
    int i;
    
    for(i = 0 ; i < 3; i++){
        
        a *=2;
    }
    printf("a = %d\n",a);
    
    return 0;
}
