//
//  main.c
//  ch16_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int *pc;
    int num,count = 2;
    printf("> 양수 입력 : ");
    scanf("%d",&num);
    pc = (int *)malloc((num-2)*sizeof(int));
    while(count < num){
        
        int check = 0;
        for(int i = 2 ; i < count ; i++){
            if(count % i == 0 ) {
                check = 1;
                break;
            }
        }
        if(check == 1){
            pc[count-2] = -1;
        }else{
            pc[count-2] = count;
        }
        count++;
    }
    for(int i = 0 ; i < num-2 ; i++){
        if(pc[i] != -1){
            printf("%5d",pc[i]);
            
        }else{
            printf("%5c",'x');
        }
        if((i+1) % 5 == 0 ) printf("\n");
    }
    printf("\n");
    free(pc);
    return 0;
}
