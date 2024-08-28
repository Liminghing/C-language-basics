//
//  main.c
//  ex17_11
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>

enum season {SPRING,SUMMER,FALL,WINTER};

int main(int argc, const char * argv[]) {
    enum season ss;
    char *pc =NULL;
    
    ss = SPRING;
    switch(ss){
        case SPRING:
            pc = "SPRING1";
            break;
        case SUMMER:
            pc = "SUMMER1";
            break;
        case FALL:
            pc = "FALL1";
            break;
        case WINTER:
            pc = "WINTER1";
            break;
    }
    printf("%s\n",pc);
    return 0;
}
