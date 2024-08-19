//
//  main.c
//  ex10_03
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[3] = {10,20,30};
    int *pa = ary;
    int i ;
    
    printf("배열의 값 : ");
    for(i = 0 ; i < 3 ; i++){
        printf("%d ",*pa);
        pa++;
    }
    return 0;
}
