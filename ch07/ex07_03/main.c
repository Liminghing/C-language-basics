//
//  main.c
//  ex07_03
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void print_char(char ch,int count);
int main(int argc, const char * argv[]) {
    
    print_char('@',5);
    
    return 0;
}
void print_char(char ch,int count){
    int i;
    for(i = 0; i < count ; i++){
        printf("%c",ch);
    }
}
