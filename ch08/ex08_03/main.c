//
//  main.c
//  ex08_03
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;
    
    count = sizeof(score) / sizeof(score[0]);
    
    for(i = 0; i < count ; i++){
        scanf("%d",&score[i]);
    }
    
    for(i = 0; i < count ; i++){
        total +=score[i];
    }
    
    avg = total / (double)count;
    
    for(i = 0; i < count ; i++){
        printf("%5d",score[i]);
    }
    printf("\n");
    
    printf("평균 : %.1lf\n",avg);

    return 0;
}
