//
//  main.c
//  ex15_03
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>
void print_str(char **,int);
int main(int argc, const char * argv[]) {
    char *ptr_ary[] = {
        "eagle",
        "tiger",
        "lion",
        "squirrel",
    };
    
    int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary,count);
    return 0;
}
void print_str(char **pps,int size){
    int i;
    for(i = 0 ; i < size ; i++){
        printf("%s\n",pps[i]);
    }
}
