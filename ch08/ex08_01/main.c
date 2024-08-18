//
//  main.c
//  ex08_01
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[5];

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    scanf("%d",&ary[3]);
    
    printf("%d\n",ary[2]);
    printf("%d\n",ary[3]);
    printf("%d\n",ary[4]);
    return 0;
    return 0;
}
