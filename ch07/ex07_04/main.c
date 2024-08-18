//
//  main.c
//  ex07_04
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void print_line(void);
int main(int argc, const char * argv[]) {
    print_line();
    printf("학번  이름  전공  학점\n");
    print_line();
    return 0;
}
void print_line(void){
    int i;
    for(i = 0 ; i < 50 ;i++)
    {
        printf("-");
    }
    printf("\n");
}
