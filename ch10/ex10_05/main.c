//
//  main.c
//  ex10_05
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>
void print_ary(int *pa);

int main(int argc, const char * argv[]) {
    int ary[5] = {10,20,30,40,50};
    print_ary(ary);
    
    return 0;
}
void print_ary(int *pa){
    for(int i = 0 ; i < 5 ; i++){
        
        printf("%d",pa[i]);
    }
    
}
