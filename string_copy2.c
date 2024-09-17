#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
} hey;
int main(){
    hey e1;
    e1.code=234;
    strcpy(e1.name,"raghav");
    e1.salary=456.67;
    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}
