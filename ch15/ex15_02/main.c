//
//  main.c
//  ex15_02
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>
void swap_ptr(char **,char **);
int main(int argc, const char * argv[]) {
    char *pa = "success";
    char *pb = "failure";
    printf("pa -> %s, pb -> %s\n",pa,pb);
    swap_ptr(&pa,&pb);
    printf("pa -> %s, pb -> %s\n",pa,pb);
    return 0;
}
void swap_ptr(char **ppa,char **ppb){
    char *pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}
