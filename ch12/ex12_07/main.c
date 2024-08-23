//
//  main.c
//  ex12_07
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[80] = "apple juice";
    char *ps = "banana";
    puts(str);
    fputs(ps,stdout);
    puts("milk");
    return 0;
}
