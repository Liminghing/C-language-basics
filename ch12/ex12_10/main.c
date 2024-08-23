//
//  main.c
//  ex12_10
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str[80]="straw";
    strcat(str,"berry");
    printf("%s\n",str);
    strncat(str,"piece",3);
    printf("%s\n",str);
    
    return 0;
}
