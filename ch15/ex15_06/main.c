//
//  main.c
//  ex15_06
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>
void print_ary(int (*)[4]); //매개변수가 배열포인터
int main(int argc, const char * argv[]) {
    int ary[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    print_ary(ary);
    
    return 0;
}
void print_ary(int (*ap)[4]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("%5d",ap[i][j]);
        }
        printf("\n");
    }
}
