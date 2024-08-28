//
//  main.c
//  ex17_08
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};
void print_list(struct address *);

int main(int argc, const char * argv[]) {
    struct address list[4] = {
        {"홍길동",23,"111-111","서울"},
        {"이순신",33,"222-222","보스턴"},
        {"장보고",34,"333-333","도쿄"},
        {"안중군",22,"444-444","서울"},
    };
    print_list(list);
    return 0;
}
void print_list(struct address *lp){
    for(int i = 0 ; i < 4 ; i++){
        printf("%10s%5d%10s%20s\n",
               lp[i].name,
               (*(lp+i)).age,
               (lp+i)->tel,
               lp[i].addr
               );
    }
    
}



