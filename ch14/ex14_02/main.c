//
//  main.c
//  ex14_02
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int i,j;
    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 4 ; j++){
            printf("%5d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
