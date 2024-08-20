//
//  main.c
//  ex11_01
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char small,cap = 'L';
    if((cap > 'A') && ( cap <= 'Z')){
        small = cap + ('a'-'A');
    }
    printf("대문자 : %c %c",cap,'\n');
    printf("소문자 : %c %c",small,'\n');
    return 0;
}
