//
//  main.c
//  ex14_03
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char animal[5][20];
    int i;
    int count;
    
    count = sizeof(animal) / sizeof(animal[0]);
    for(i = 0 ; i < count ; i++){
        scanf("%s",animal[i]);
    }
    
    for(i = 0 ; i < count ; i++){
        printf("%s\t",animal[i]);
    }
    
    return 0;
}
