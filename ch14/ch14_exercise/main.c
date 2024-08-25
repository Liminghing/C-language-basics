//
//  main.c
//  ch14_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[5][6];
    
    for(int i = 0; i < 5 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            if((j == 5) && (i == 4)){
                int sum = 0;
                for(int ii = 0 ; ii < 4 ; ii++){
                    for(int jj = 0; jj < 5 ; jj++){
                        sum +=ary[ii][jj];
                    }
                }
                ary[i][j] = sum;
            }else if((j != 5) && (i == 4)){
                
                ary[i][j] = ary[0][j] + ary[1][j] + ary[2][j] + ary[3][j];
                
            }else if((j == 5) && (i != 4)){
                
                ary[i][j] = ary[i][0] + ary[i][1] + ary[i][2] + ary[i][3] + ary[i][4];
                
            }else{
                
                ary[i][j] = (i*5) + (j+1);
                
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            printf("%5d",ary[i][j]);
        }
        printf("\n");
    }
    return 0;
}
