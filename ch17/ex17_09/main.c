//
//  main.c
//  ex17_09
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>

struct list
{
    int num;
    struct list *next;
};

int main(int argc, const char * argv[]) {
    struct list a = {10,0},b = {20},c = {30};
    struct list *head = &a, *current;
    current = head;
    
    a.next = &b;
    b.next = &c;
    printf("head->num : %d\n",head -> num);
    printf("(*head).num : %d\n",(*head).num);
    printf("head->next->num : %d\n",head -> next -> num);
    printf("(*(*head).next).num : %d\n",(*(*head).next).num);
    
    printf("list all : ");
    while(current != 0){
        printf("%5d",current->num);
        current = (*current).next;
    }
    printf("\n");
    return 0;
}
