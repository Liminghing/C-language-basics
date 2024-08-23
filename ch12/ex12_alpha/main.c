//
//  main.c
//  ex12_alpha
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    char str[20];
    char ch;
    
    do{
        ch = getchar();
        str[i] = ch;
        i++;
    }while(ch != '\n');
    
    str[--i] = '\0';
    printf("%s",str);
        
    return 0;
}
