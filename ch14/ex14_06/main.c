//
//  main.c
//  ex14_06
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *pary[5];
    int i;
    
    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    for(i = 0 ; i < 5 ; i++){
        printf("%s\n",pary[i]);
    }
    return 0;
}
