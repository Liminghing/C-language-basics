//
//  main.c
//  ex14_07
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary1[4] = {1,2,3,4};
    int ary2[4] = {11,22,33,44};
    int ary3[4] = {111,222,333,444};
    int *pary[3] = {ary1,ary2,ary3};
    
    int i,j;
    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            printf("%5d",pary[i][j]);
        }
        printf("\n");
    }
    return 0;
}
