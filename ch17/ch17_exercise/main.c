//
//  main.c
//  ch17_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>
struct grade{
    int kor;
    int eng;
    int mat;
};
typedef struct
{
    int num;
    char name[20];
    struct grade sg;
    int tot;
    double avg;
    char tgrade;
} Student;
int main(int argc, const char * argv[]) {
    Student class[5];
    Student *pS;
    for(int i = 0 ; i < 5 ; i++){
        printf("학번 : ");
        scanf("%d",&(class[i].num));
        printf("이름 : ");
        scanf("%s",class[i].name);
        printf("국어, 영어, 수학 : ");
        scanf("%d %d %d",&(class[i].sg.kor),&(class[i].sg.eng),&(class[i].sg.mat));
        class[i].tot = class[i].sg.kor+class[i].sg.eng+class[i].sg.mat;
        class[i].avg = (class[i].tot) / 3.0;
        if(class[i].avg >= 90){
            class[i].tgrade = 'A';
        }else if (class[i].avg >=80){
            class[i].tgrade = 'B';
        }else if(class[i].avg >=70){
            class[i].tgrade = 'C';
        }else{
            class[i].tgrade = 'F';
        }
    }
    printf("# 정렬 전 데이터...\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%5d %s %5d%5d%5d%5d%5.1lf%5c\n",
               class[i].num,
               class[i].name,
               class[i].sg.kor,
               class[i].sg.eng,
               class[i].sg.mat,
               class[i].tot,
               class[i].avg,
               class[i].tgrade
               );
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j < 5 ; j++){
            if(class[i].tot < class[j].tot){
                Student temp = class[i];
                class[i] = class[j];
                class[j] = temp;
            }
        }
    }
    printf("# 정렬 후 데이터...\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%5d %s %5d%5d%5d%5d%5.1lf%5c\n",
               class[i].num,
               class[i].name,
               class[i].sg.kor,
               class[i].sg.eng,
               class[i].sg.mat,
               class[i].tot,
               class[i].avg,
               class[i].tgrade
               );
    }
    return 0;
}
