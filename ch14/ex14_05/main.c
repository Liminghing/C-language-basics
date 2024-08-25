//
//  main.c
//  ex14_05
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int score[2][3][4] = {
        {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},
        {{101,102,103,104},{105,106,107,108},{109,110,111,112},{113,114,115,116}}
    };
    int i,j,k;
    for(i = 0 ; i < 2 ; i++){
        printf("%d반의 점수..\n",i+1);
        for(j = 0 ; j < 3 ; j++){
            for(k = 0 ; k < 4 ; k++){
                printf("%5d ",score[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
