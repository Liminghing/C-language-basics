//
//  main.c
//  ex10_06
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

void print_ary(int *pa,int size);

int main(int argc, const char * argv[]) {
    int ary01[5] = {10,20,30,40,50};
    int ary02[7] = {10,20,30,40,50,60,70};
    
    print_ary(ary01,sizeof(ary01)/sizeof(ary01[0]));
    printf("\n");
    print_ary(ary02,sizeof(ary02)/sizeof(ary02[0]));
    return 0;
}
void print_ary(int *pa,int size){
    for(int i = 0 ; i < size ; i++){
        
        printf("%5d",pa[i]);
    }
    
}
