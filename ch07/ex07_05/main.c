//
//  main.c
//  ex07_05
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void fruit(void);
int main(int argc, const char * argv[]) {
    fruit();
    return 0;
}
void fruit(void){
    printf("apple\n");
    fruit();
}
