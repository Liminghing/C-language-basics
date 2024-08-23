//
//  main.c
//  ex12_09
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str[20] = "mango tree";
    
    strncpy(str,"apple-pie",5);
    
    printf("%s",str);
    return 0;
}
