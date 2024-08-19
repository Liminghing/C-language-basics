//
//  main.c
//  ch10_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>
void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);


int main(int argc, const char * argv[]) {
    int lotto_nums[6];
    input_nums(lotto_nums);
    print_nums(lotto_nums);
    return 0;
}
void input_nums(int *lotto_nums){
    int i=0,temp,check;
    while(i < 6){
        check = 0;
        printf("번호 입력 : ");
        scanf("%d",&temp);
        for(int j = 0 ; j < i ; j++){
            if(lotto_nums[j] == temp){
                printf("같은 번호가 있습니다!\n");
                check = 1;
                break;
            }
        }
        if(check == 1) continue;
        lotto_nums[i] = temp;
        i++;
    }
}
void print_nums(int *lotto_nums){
    printf("로또 번호 :");
    for (int i = 0 ; i < 6 ; i++){
        printf("  %d",lotto_nums[i]);
    }
}
