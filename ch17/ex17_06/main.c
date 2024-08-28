//
//  main.c
//  ex17_06
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>

struct score
{
    int kor;
    int eng;
    int math;
};

int main(int argc, const char * argv[]) {
    struct score yuri = {90,80,70};
    struct score *ps = &yuri;
    
    printf("국어 : %d\n",(*ps).kor);
    printf("영어 : %d\n",ps->eng);
    printf("수학 : %d\n",ps->math);
    return 0;
}
