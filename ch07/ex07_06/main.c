//
//  main.c
//  ex07_06
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void fruit(int count);
int main(int argc, const char * argv[]) {
    fruit(1);
    return 0;
}
void fruit(int count){
    printf("apple\n");
    if(count == 3) return;
    fruit(count + 1);
}
