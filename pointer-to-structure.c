#pointer to structures
#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[];
};

int main(){
    struct employee *ptr;
    struct employee e1;
    e1.code=45;
    ptr = &e1;
    printf("%d",(*ptr).code);
    // or
    // printf("%d",ptr->code);gives same output 45
    return 0;
}
