//
//  main.c
//  ex14_04
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char animal1[5][20] = {
        {'d','o','g','\0'},
        {'t','i','g','e','r','\0'},
        {'r','a','b','b','i','t','\0'},
        {'h','o','r','s','e','\0'},
        {'c','a','t','\0'}
    };
    char animal2[5][20]={
        "dog",
        "tiger",
        "rabbit",
        "horse",
        "cat"
    };
    
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("%s ",animal1[i]);
    }
    printf("\n");
    
    for(i = 0 ; i < 5 ; i++){
        printf("%s ",animal2[i]);
    }
    return 0;
}
