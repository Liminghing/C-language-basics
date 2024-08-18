//
//  main.c
//  ex06_03
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 1;
    do{
        
        a *=2;
        
    }while(a<10);
    printf("a : %d\n",a );
    return 0;
}
