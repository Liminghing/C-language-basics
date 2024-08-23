//
//  main.c
//  ex12_02
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *dessert = "apple";
    
    printf("오늘 후식은 %s입니다.\n",dessert);
    dessert = "banana";
    printf("내일 후식은 %s입니다.\n",dessert);
    return 0;
}
