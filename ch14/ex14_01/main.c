//
//  main.c
//  ex14_01
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int score[3][4];
    int total;
    double avg;
    int i,j;
    
    for(int i = 0 ; i < 3 ; i++){
        printf("4과목의 점수 입력 : ");
        for(j = 0 ; j < 4 ; j++){
            scanf("%d",&score[i][j]);
        }
    }
    for(i = 0 ; i < 3 ; i++){
        total = 0;
        for(j = 0 ; j < 4 ; j++){
            total +=score[i][j];
        }
        avg = total / 4.0;
        printf("총점 : %d,평균 : %.2lf\n",total,avg);
    }
    return 0;
}
